   import boto3
   import json
   import base64

   s3 = boto3.client('s3')

   def lambda_handler(event, context):
       bucket_name = 'your-bucket-name'
       file_content = base64.b64decode(event['file_content'])
       file_name = event['file_name']

       s3.put_object(Bucket=bucket_name, Key=file_name, Body=file_content)

       return {
           'statusCode': 200,
           'body': json.dumps('File uploaded successfully')
       }