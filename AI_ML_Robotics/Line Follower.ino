int sen_min=1023;
int sen_max=0,flag;
int sensorPin1=A0;
int sensorPin2=A1;
int sensorPin3=A2;
int sensorPin4=A3;
int sen_avg1,sen_avg2,sen_avg3;
int x,y,z,a,b,c;
int sen_min1,sen_min2,sen_min3,sen_max1,sen_max2,sen_max3;
int i,s;
int reading1,reading2,reading3;
void calib() 
{
  for(i=0;i<2000;i++)
  {
    reading1=analogRead(sensorPin1);
    reading2=analogRead(sensorPin2);
    reading3=analogRead(sensorPin3);
    if(reading1<sen_min1&&reading2<sen_min2&&reading3<sen_min3)
    {
      sen_min1=reading1;
      sen_min2=reading2;
      sen_min3=reading3;
      
    }
    else if(reading1>sen_max1&&reading2>sen_max2&&reading3>sen_max3)
    {
      sen_max1=reading1;
      sen_max2=reading2;
      sen_max3=reading3;
    }
    delay(5);
  }
    sen_avg1=(sen_min1+sen_max1)/2;
    sen_avg2=(sen_min2+sen_max2)/2;
    sen_avg3=(sen_min3+sen_max3)/2;
}
    
void setup()
{
  Serial.begin(9600);
  pinMode(sensorPin1,INPUT);
  pinMode(sensorPin2,INPUT);
  pinMode(sensorPin3,INPUT);
  pinMode(sensorPin4,INPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);
  calib();   
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(4000);              // wait for a second
  digitalWrite(12, LOW);
digitalWrite(7,LOW);
}

void loop()
{
   a=analogRead(sensorPin1);
  if(a>sen_avg1)
  {
    Serial.println("Black");
    x=0;
  }
    else
    {
    Serial.println("White");
    x=1;
    }
  b=analogRead(sensorPin2);
  if(b>sen_avg2)
  {
    Serial.println("Black");
    y=0;
  }
    else
    {
    Serial.println("White");
    y=1;
    }
  c=analogRead(sensorPin3);
  if(c>sen_avg3)
  {
    Serial.println("Black");
    z=0;
  }
    else
    {
    Serial.println("White");
    z=1;
    }
    Serial.print("\n");
//    delay(1000);
    Serial.print(a);
    analogRead(A0);
    Serial.print(" ");
//    delay(500);
    Serial.print(analogRead(A1));
    Serial.print(" ");
 //   delay(500);
    Serial.print(analogRead(A2));
    Serial.print("\n");
//    delay(500);
s=digitalRead(A3);
if(s==1)
{
  digitalWrite(4,HIGH);
  analogWrite(3,0);      
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
//  delay(2000);
}
if(s==0)
{
 digitalWrite(4,LOW);

}
 if(x==1&&y==0&&z==1)
{                            /// go straight
  analogWrite(3,140);      //3 5 right 6 9 left
  analogWrite(5,0);
  analogWrite(6,160);
  analogWrite(9,0);
   
}
if(x==0&&y==1&&z==1)
{                            /// go soft left
  analogWrite(3,120);
  analogWrite(5,0);
  analogWrite(6,70);
  analogWrite(9,0);
  flag=0;  
}
if(x==1&&y==1&&z==0)
{                            /// go soft right
  analogWrite(3,80);
  analogWrite(5,0);
  analogWrite(6,140);
  analogWrite(9,0);
  flag=1;
}
if(x==0&&y==0&&z==1)
{                            /// go hard left
  analogWrite(3,140);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
}

if(x==1&&y==0&&z==0)
{                            /// go hard right
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,140);
  analogWrite(9,0);

}

if(x==1&&y==1&&z==1)
{                            /// go 
  if(flag==1) //right turn
  {
  analogWrite(3,0);
  analogWrite(5,40);
  analogWrite(6,120);
  analogWrite(9,0);
  }
  if(flag==0)
  {
    analogWrite(3,120);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,40);
  }
  }
if(x==0&&y==0&&z==0)
{                            /// Tpoint
  analogWrite(3,140);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
}
}


   
