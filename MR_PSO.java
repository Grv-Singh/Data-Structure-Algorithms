import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.mapreduce.*;
import org.apache.hadoop.mapred.*;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.DoubleWritable;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.NullWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapred.InputFormat;
import org.apache.hadoop.mapred.JobClient;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.MapReduceBase;
import org.apache.hadoop.mapred.OutputCollector;
import org.apache.hadoop.mapred.OutputFormat;
import org.apache.hadoop.mapred.Reducer;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.mapreduce.Mapper.Context;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.mapreduce.lib.input.TextInputFormat;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;
import org.apache.hadoop.mapreduce.lib.output.TextOutputFormat;

import java.lang.*;
import java.net.URI;

public class MR_PSO 
{
	private static double gBest=1000000, gx=0,gy=0;
	private static double LOC = 4.25;
	private static double EffortActual = 4.50;
	public static class Mapping extends Mapper <LongWritable , Text, Text, Text>
	{
		public double calfit(double a, double b) 
		{
			double fit=0, EffortApplied;
			EffortApplied = a * Math.pow(LOC, b);
			fit = (Math.abs((EffortActual - EffortApplied)) / EffortActual) * 100;
			return fit;
		}
		
		public void map(LongWritable key, Text value, Context context)throws IOException, InterruptedException 
		{
			
			String sid="",a="",b="",v1="",v2="",pb="",pbx="",pby="";
			double f=0,aa=0,bb=0,pb1=0,pbx1=0,pby1=0;
			String line=value.toString();
			System.out.println("inside the mapper");
			if(line.length()>0)
			{
				
				String [] parts=line.split(";");    //split is a method of class string of java
				
				sid=parts[0]; //System.out.println(sid);
				a=parts[1]; //System.out.println(a);
				b=parts[2];
				v1=parts[3];
				v2=parts[4];
				pb=parts[5];
				pbx=parts[6];
				pby=parts[7];//System.out.println(pby);
			}
			aa=Double.parseDouble(a);
			bb=Double.parseDouble(b);
			pb1=Double.parseDouble(pb);
			
			f = calfit(aa,bb);
			//System.out.println(f);
			if(f<pb1)
			{
				//System.out.println("IF");
				pb1=f;
				pbx1=aa;
				pby1=bb;
			}
		
			String pbw=Double.toString(pb1);
			String pbxw=Double.toString(pbx1);
			String pbyw=Double.toString(pby1);
			
			String vl = sid+";"+a+";"+b+";"+v1+";"+v2+";"+pbw+";"+pbxw+";"+pbyw;
			//System.out.println(vl);
			context.write(new Text("1"), new Text(vl));
		
			
			
			
			}
		
	

	}
	
	public static class Reducing extends org.apache.hadoop.mapreduce.Reducer <Text, Text, Text, Text>
	{

	
		public void reduce(Text key, Iterable<Text> value, Context context)throws IOException, InterruptedException 
		{
			//System.out.println("Reduce");
			String sid="",a="",b="",v1="",v2="",pb="",pbx="",pby="";
			double f=0,aa=0,bb=0,pb1=0,pbx1=0,pby1=0,vv1=0,vv2=0;
			
			for(Text val : value)
			{
			String line=val.toString();
			if(line.length()>0)
			{
				
				String [] parts=line.split(";");
				
				sid=parts[0];
				a=parts[1];
				b=parts[2];
				v1=parts[3];
				v2=parts[4];
				pb=parts[5];
				pbx=parts[6];
				pby=parts[7];
			}
			
			aa=Double.parseDouble(a);
			bb=Double.parseDouble(b);
			vv1=Double.parseDouble(v1);
			vv2=Double.parseDouble(v2);
			pb1=Double.parseDouble(pb);
			pbx1=Double.parseDouble(pbx);
			pby1=Double.parseDouble(pby);
			if(pb1<gBest)
			{
				//System.out.println("gbest me aya");
				gBest=pb1;
				gx=pbx1;
				gy=pby1;
			}
			int c1=2,c2=2;
			//vv1 = vv1 + (c1 *Math.random()*(pbx1-aa)) + (c2*Math.random()*(gx-aa));
			//vv2 = vv2 + (c1 *Math.random()*(pby1-bb)) + (c2*Math.random()*(gy-bb));
			vv1 = vv1 + (c2*Math.random()*(gx-aa));
			vv2 = vv2 +(c2*Math.random()*(gy-bb));
			
			aa=aa+vv1;
			bb=bb+vv2;
			
			String aw = Double.toString(aa);
			String bw = Double.toString(bb);
			String v1w = Double.toString(vv1);
			String v2w = Double.toString(vv2);
			
			String valu = aw+";"+bw+";"+v1w+";"+v2w+";"+pb+";"+pbx+";"+pby;
			String k=sid+";";
			context.write(new Text(k), new Text(valu));
		}
	}
}
	public  void run() throws Exception
	{
		 Configuration conf1 = new Configuration();
         //Set the block size
         conf1.setInt("dfs.block.size", 1024 * 1024) ;
         //Job job1 = Job.getInstance(conf1, "POP_GENERATION");
		 FileSystem hdfs = FileSystem.get( new URI( "hdfs://localhost:9000" ), conf1 );//see core-site.xml in hadoop/etc/
         Path workingDir=hdfs.getWorkingDirectory();
         Path PSOData= new Path("/MyPSOData");
         PSOData = Path.mergePaths(workingDir, PSOData);
         
         Path inputFolderPath= new Path(PSOData+"/inputfile");
         //Path outputFolderPath= new Path(PSOData+"/outputfile");
         System.out.println(1);
         //Path outputFolderPath= new Path(PSOData+"/outputfile");
		 if(hdfs.exists(PSOData))
         {
     	  hdfs.delete(PSOData, true);
         }
         hdfs.mkdirs(PSOData);  
         if(hdfs.exists(inputFolderPath))
         {
     	  hdfs.delete(inputFolderPath, true);
         }
         hdfs.mkdirs(inputFolderPath);
         //For first generation copy the file from local to hdfs
         Path localFilePath = new Path("ip/inp");
         System.out.println(2);
         hdfs.copyFromLocalFile(localFilePath, inputFolderPath);
         Path inPath = new Path (inputFolderPath+"");
        // Path outPath = new Path("");
         System.out.println(3);
		for (int i=0; i<4; i++)
		{
		Configuration conf = new Configuration();
		
		
	
			Path outPath = new Path(PSOData+"/outputfile"+i);
			Job job = new Job(conf , "PSO");
			job.setJarByClass(MR_PSO.class);
			job.setMapperClass(Mapping.class);
			job.setReducerClass(Reducing.class);
			job.setOutputKeyClass(Text.class);
			job.setOutputValueClass(Text.class);
			//System.out.println(inPath);
			FileInputFormat.addInputPath(job, inPath);
			FileOutputFormat.setOutputPath(job, outPath);
			
			job.waitForCompletion(true);
			inPath=outPath;
			
		}
		System.out.println("Evaluated value of a... " +gx);
		System.out.println("Evaluated value of b... " +gy);
		System.out.println("Evaluated value of Effort... " +gx*(Math.pow(LOC, gy)));
		System.out.println("Actual value of Effort... 4.5");
		System.out.println("Computed Error is... " + (double)((4.5-(gx*(Math.pow(LOC, gy))))/4.5)*100);
		
	
}
}
