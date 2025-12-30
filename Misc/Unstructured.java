import java.io.IOException;
import java.util.ArrayList;

import java.util.List;


import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.NullWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.Mapper;

import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.mapreduce.lib.input.TextInputFormat;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;
import org.apache.hadoop.mapreduce.lib.output.TextOutputFormat;




public class Unstructured {
	public static class TopTenMapper extends	Mapper<Object, Text, NullWritable, Text> {
	
		List productId=new ArrayList();
		List title=new ArrayList();
		List userId=new ArrayList();
		List price=new ArrayList();
		List profileName=new ArrayList();
		List helpfulness=new ArrayList();
		List score=new ArrayList();
		List summary=new ArrayList();
		List time=new ArrayList();
		List text=new ArrayList();
	public void map(Object key, Text value, Context context)throws IOException, InterruptedException {
		
		String line=value.toString();
		if(line.length()>0){
			if(line.contains("productId")||line.contains("title")||line.contains("price")||line.contains("userId")||line.contains("profileName") ||line.contains("helpfulness")||line.contains("score")||line.contains("time")||line.contains("summary")||line.contains("text")){
			String [] parts=line.split(":");
			
					if(parts[0].contains("productId")){
				
				productId.add(parts[1]);
			}
					else if(parts[0].contains("title")){
						title.add(parts[1]);
					}
					else if(parts[0].contains("price")){
						price.add(parts[1]);
					}
					else if(parts[0].contains("userId")){
						userId.add(parts[1]);
					}
					else if(parts[0].contains("profileName")){
						profileName.add(parts[1]);
					}
					else if(parts[0].contains("helpfulness")){
						helpfulness.add(parts[1]);
					}
					else if(parts[0].contains("score")){
						score.add(parts[1]);
					}
					else if(parts[0].contains("time")){
						time.add(parts[1]);
					}
					else if(parts[0].contains("summary")){
						summary.add(parts[1]);
					}
					else if(parts[0].contains("text")){
						text.add(parts[1]);
					}
			}
			}
			
		
	}
	protected void cleanup(Context context) throws IOException,	InterruptedException {
	
		String patern="productId"+"\t"+"title"+"\t"+"price"+"\t"+"userId"+"\t"+"profileName"+"\t"+helpfulness+"\t"+"score"+"\t"+"time"+"\t"+"summary"+"\t"+"text";
		context.write(NullWritable.get(), new Text(patern));
		String data=null;
		
	for (int i=0;(i<productId.size()&&i<title.size());i++) {
		 data=productId.get(i).toString()+"\t"+title.get(i).toString()+"\t"+price.get(i).toString()+"\t"+userId.get(i).toString()+"\t"+profileName.get(i).toString()+"\t"+helpfulness.get(i).toString()+"\t"+score.get(i).toString()+"\t"+time.get(i).toString()+"\t"+summary.get(i).toString()+"\t"+text.get(i).toString();
		 System.out.println(data);
		if(data.length()>0)
		 context.write(NullWritable.get(),new Text( data));
	}
	
	 
	}
	
	}
	
public static void main(String[] args) throws Exception { 
		
		Configuration conf= new Configuration();
		
		Job job = new Job(conf,"UseCase1");
    
		
		
		job.setJarByClass(Unstructured.class);
		job.setMapperClass(TopTenMapper.class);
		job.setNumReduceTasks(0);
		
		
		job.setOutputKeyClass(NullWritable.class);
		job.setOutputValueClass(Text.class);
		job.setInputFormatClass(TextInputFormat.class);
		job.setOutputFormatClass(TextOutputFormat.class);
		
		Path outputPath = new Path(args[1]);
		
	    FileInputFormat.addInputPath(job, new Path(args[0]));
	    FileOutputFormat.setOutputPath(job, outputPath);
	    
			//deleting the output path automatically from hdfs so that we don't have delete it explicitly
			
		outputPath.getFileSystem(conf).delete(outputPath);
			
			//exiting the job only if the flag value becomes false
			
		System.exit(job.waitForCompletion(true) ? 0 : 1);
}
}
