import java.io.*;
import java.util.Random;

import org.apache.hadoop.fs.Path;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.net.URI;
import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.Random;
import java.util.StringTokenizer;

import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FSDataInputStream;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.SequenceFile;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapred.SequenceFileOutputFormat;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.mapreduce.Reducer;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.mapreduce.lib.input.KeyValueTextInputFormat;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;

public class PSO_IN 
{
	private int pop_size;
	private int d;
	private Random myRand;
	private double pos[][], vel[][], UL_bound[][];
	
	public PSO_IN( int pop, int dim)
	{
		pop_size=pop;
		d=dim;
		UL_bound = new double[2][d];
		pos = new double[pop_size][d];
		vel = new double[pop_size][d];
		for(int i=0;i<d;i++)
		{
			UL_bound[0][i]=0.0;
			UL_bound[1][i]=5.0;
		}
		myRand = new Random();
	}
	public void init() throws IOException
	{
		for (int i=0;i<pop_size;i++)
		{
			for(int j=0;j<d;j++)
			{
				double t=myRand.nextDouble();
				pos[i][j]= (t* ( UL_bound[1][j] - UL_bound[0][j])) + UL_bound[0][j]; 
			}
		}
		
		for (int i=0;i<pop_size;i++)
		{
			for(int j=0;j<d;j++)
			{
				vel[i][j]=0;
			}
		}
		
	}
	
	public double[] check_bound(double p[])
	{
		for(int i=0;i<d;i++)
		{
			if (p[i]<UL_bound[0][i])
				p[i] = UL_bound[0][i];
			if (p[i]>UL_bound[1][i])
				p[i] = UL_bound[1][i];
			
		}
		return p;
	}
	
	public void start() throws IOException
	{
		
		
		File file = new File("ip/inp");
		 if (!file.exists()) 
		 {
			file.createNewFile();
		}

		FileWriter fw = new FileWriter(file.getAbsoluteFile());
		BufferedWriter bw = new BufferedWriter(fw);
		
		
		for(int i=0;i<pop_size;i++)
		{
			bw.write( (i+1)+";"+pos[i][0]+";"+pos[i][1]+";"+vel[i][0]+";"+vel[i][1]+";"+1000000+";"+0+";"+0+"\n");
			
		}
		bw.close();
		
	
		
	}
	
	
	
	public static void main(String [] args) throws Exception
	{
		PSO_IN p1= new PSO_IN(500, 2);
		p1.init();
		p1.start();
		MR_PSO p2 = new MR_PSO();
		p2.run();
	}

}
