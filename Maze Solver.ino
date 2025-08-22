int grid[56][67],i=45,j=35;
int flag,end_found=0;
int sensorPin1=A0;
int sensorPin2=A1;
int sensorPin3=A2;
int sensorPin4=A3;
int sensorPin5=A4;
int sensorPin6=A5;
int sen_avg1,sen_avg2,sen_avg3,sen_avg4,sen_avg5,sen_avg6;
int x,y,z,p,q,r,a,b,c,d,e,f,m,n;
int sen_min1,sen_min2,sen_min3,sen_min4,sen_min5,sen_min6,sen_max1,sen_max2,sen_max3,sen_max4,sen_max5,sen_max6;
int dir=1,turn=0;
int reading1,reading2,reading3,reading4,reading5,reading6;
int smallest_val;

int find_dir(int dir,int turn){
  if(turn==0){
    return dir;
  }
  if(turn==1){
    if(dir==1){
      return 3;
    }
    if(dir==2){
      return 4;
    }
    if(dir==3){
      return 5;
    }
    if(dir==4){
      return 6;
    }
    if(dir==5){
      return 7;
    }
    if(dir==6){
      return 8;
    }
    if(dir==7){
      return 1;
    }
    if(dir==8){
      return 2;
    }
  }
  if(turn==4){
    if(dir==1){
      return 8;
    }
    if(dir==2){
      return 1;
    }
    if(dir==3){
      return 2;
    }
    if(dir==4){
      return 3;
    }
    if(dir==5){
      return 4;
    }
    if(dir==6){
      return 5;
    }
    if(dir==7){
      return 6;
    }
    if(dir==8){
      return 7;
    }
  }
  if(turn==2){
    if(dir==1){
      return 2;
    }
    if(dir==2){
      return 3;
    }
    if(dir==3){
      return 4;
    }
    if(dir==4){
      return 5;
    }
    if(dir==5){
      return 6;
    }
    if(dir==6){
      return 7;
    }
    if(dir==7){
      return 8;
    }
    if(dir==8){
      return 1;
    }
  }
  if(turn==5){
    if(dir==1){
      return 7;
    }
    if(dir==2){
      return 8;
    }
    if(dir==3){
      return 1;
    }
    if(dir==4){
      return 2;
    }
    if(dir==5){
      return 3;
    }
    if(dir==6){
      return 4;
    }
    if(dir==7){
      return 5;
    }
    if(dir==8){
      return 6;
    }
  }
}

void calib() 
{
  for(i=0;i<2000;i++)
  {
    reading1=analogRead(sensorPin1);
    reading2=analogRead(sensorPin2);
    reading3=analogRead(sensorPin3);
    reading4=analogRead(sensorPin4);
    reading5=analogRead(sensorPin5);
    reading6=analogRead(sensorPin6);
    if(reading1<sen_min1&&reading2<sen_min2&&reading3<sen_min3&&reading4<sen_min4&&reading5<sen_min5&&reading6<sen_min6)
    {
      sen_min1=reading1;
      sen_min2=reading2;
      sen_min3=reading3;
      sen_min4=reading4;
      sen_min5=reading5;
      sen_min6=reading6;
      
    }
    else if(reading1>sen_max1&&reading2>sen_max2&&reading3>sen_max3&&reading4>sen_max4&&reading5>sen_max5&&reading6>sen_max6)
    {
      sen_max1=reading1;
      sen_max2=reading2;
      sen_max3=reading3;
      sen_max4=reading4;
      sen_max5=reading5;
      sen_max6=reading6;
    }
    delay(10);
  }
    sen_avg1=(sen_min1+sen_max1)/2;
    sen_avg2=(sen_min2+sen_max2)/2;
    sen_avg3=(sen_min3+sen_max3)/2;
    sen_avg4=(sen_min4+sen_max4)/2;
    sen_avg5=(sen_min5+sen_max5)/2;
    sen_avg6=(sen_min6+sen_max6)/2;
}
    
void setup()
{
  pinMode(sensorPin1,INPUT);
  pinMode(sensorPin2,INPUT);
  pinMode(sensorPin3,INPUT);
  pinMode(sensorPin4,INPUT);
  pinMode(sensorPin5,INPUT);
  pinMode(sensorPin6,INPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT); //Blue LED
  pinMode(11,OUTPUT); //Red LED
  calib();
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(10, LOW);    // turn the LED off 
  delay(1000);              // wait for a second
  digitalWrite(10, HIGH);    // turn the LED off
  delay(1000);              // wait for a second
  digitalWrite(10, LOW);    // turn the LED off
  delay(1000);              // wait for a second
  digitalWrite(10, HIGH);    // turn the LED off
  delay(3000);              // wait for 3 seconds
  digitalWrite(10, LOW);    // turn the LED off
  grid[i][j]=90;
  grid[12][12]=1;
}

void loop()
{
   a=analogRead(sensorPin1);
  if(a>sen_avg1)
  {x=0;}else{x=1;}    
  b=analogRead(sensorPin2);
  if(b>sen_avg2)
  {y=0;}else{y=1;}    
  c=analogRead(sensorPin3);
  if(c>sen_avg3)
  {z=0;}else{z=1;}
  d=analogRead(sensorPin4);
  if(d>sen_avg4)
  {p=0;}else{p=1;}
  e=analogRead(sensorPin5);
  if(e>sen_avg5)
  {q=0;}else{q=1;}
  f=analogRead(sensorPin6);
  if(f>sen_avg6)
  {r=0;}else{r=1;}

if((x==1&&y==1&&z==1&&p==1&&q==1&&r==1)||(grid[i][j]==1)){
    end_found=1; 
  for(m=0;m<56;m++){
    for(n=0;n<67;n++){
      if((grid[m][n]<1)||(grid[m][n]=='\0')){
          grid[m][n]=1000;
      }
    }
  }
  digitalWrite(11, HIGH);
}
      
if(end_found!=1){

  dir=find_dir(dir,turn);
  
if(x==0&&y==1&&z==0)
{                            //go straight
  move_straight();
  if(dir==1){
    if(j>12){  
      grid[i][j+1]=grid[i][j]+1;
    }
    if(j<12){
      grid[i][j+1]=grid[i][j]-1;
    }
  }
  if(dir==2){
    if(i>12&&j>12){
      grid[i+1][j+1]=grid[i][j]+2;
    }
    if(i>12&&j<12){
      grid[i+1][j+1]=grid[i][j];
    }
    if(i<12&&j<12){
      grid[i+1][j+1]=grid[i][j]-2;
    }
    if(i<12&&j>12){
      grid[i+1][j+1]=grid[i][j];
    }
  }
  if(dir==3){
    if(i>12){
      grid[i+1][j]=grid[i][j]+1;
    }
    if(i<12){
      grid[i+1][j]=grid[i][j]-1;
    }
  }
  if(dir==4){
    if(i>12&&j>12){
      grid[i+1][j-1]=grid[i][j];
    }
    if(i>12&&j<12){
      grid[i+1][j-1]=grid[i][j]+2;
    }
    if(i<12&&j<12){
      grid[i+1][j-1]=grid[i][j];
    }
    if(i<12&&j>12){
      grid[i+1][j-1]=grid[i][j]-2;
    }
  }
   if(dir==5){
    if(j>12){
      grid[i][j-1]=grid[i][j]-1;
    }
    if(j<12){
      grid[i][j-1]=grid[i][j]+1;
    }
  }
  if(dir==6){
    if(i>12&&j>12){
      grid[i-1][j-1]=grid[i][j]-2;
    }
    if(i>12&&j<12){
      grid[i-1][j-1]=grid[i][j];
    }
    if(i<12&&j<12){
      grid[i-1][j-1]=grid[i][j]+2;
    }
    if(i<12&&j>12){
      grid[i-1][j-1]=grid[i][j];
    }
  }
  if(dir==7){
    if(i>12){
      grid[i-1][j]=grid[i][j]-1;
    }
    if(i<12){
      grid[i-1][j]=grid[i][j]+1;
    }
  }
  if(dir==8){
    if(i>12&&j>12){
      grid[i-1][j+1]=grid[i][j];
    }
    if(i>12&&j<12){
      grid[i-1][j+1]=grid[i][j]-2;
    }
    if(i<12&&j<12){
      grid[i-1][j+1]=grid[i][j];
    }
    if(i<12&&j>12){
      grid[i-1][j+1]=grid[i][j]+2;
    }
  }
  
}
if(x==0&&y==1&&z==1)
{                            /// go hard right
  move_hard_right();
  turn=1;
}
if(x==1&&y==1&&z==0)
{                            /// go hard left
  move_hard_left();
  turn=5;
}
if(x==0&&y==0&&z==1)
{                            /// go soft right
  move_soft_right();
  turn=2;
  flag=1;
}
if(x==1&&y==0&&z==0)
{                            /// go soft left
  move_soft_left();  
  turn=4;
  flag=0;  
}

if(x==0&&y==1&&z==0&&p==0&&q==1&&r==1)
{                            /// go hard right
  move_hard_right();
  turn=1;
}
if(x==0&&y==1&&z==0&&p==1&&q==1&&r==0)
{                            /// go hard left
  move_hard_left();
  turn=5;
}
if(x==0&&y==1&&z==0&&p==0&&q==0&&r==1)
{                            /// go soft right
  move_soft_right();
  turn=2;
  flag=1;
}
if(x==0&&y==1&&z==0&&p==1&&q==0&&r==0)
{                            /// go soft left
  move_soft_left();  
  turn=4;
  flag=0;  
}

if(x==0&&y==0&&z==0)
{                            /// go 
  if(flag==1) //right turn
  {
  analogWrite(3,40);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,120);
  turn=1;
  }
  if(flag==0)
  {
  analogWrite(3,0);
  analogWrite(5,120);
  analogWrite(6,40);
  analogWrite(9,0);
  turn=5;
  }
  }
  
if(x==1&&y==1&&z==1)
{                            /// Tpoint Right Hand Algo
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,140);
  turn=1;
}
}

if(end_found==1)
{
  
  int smallest_val=grid[i][j-1];
  if(grid[i+1][j-1]<grid[i][j-1]){
    smallest_val=grid[i+1][j-1];
  }else{
      if(grid[i+1][j]<grid[i][j-1]){
        smallest_val=grid[i+1][j];
        }else{
            if(grid[i+1][j+1]<grid[i][j-1]){
              smallest_val=grid[i+1][j+1];
              }else{
                if(grid[i][j+1]<grid[i][j-1]){
                 smallest_val=grid[i][j+1];
                  }
                  }
             }
       }
   
       if(smallest_val==grid[i][j-1]){move_hard_left();}
       if(smallest_val==grid[i+1][j-1]){move_hard_right();}
       if(smallest_val==grid[i+1][j]){move_soft_left();}
       if(smallest_val==grid[i+1][j+1]){move_straight();}
       if(smallest_val==grid[i][j+1]){move_soft_right();}
   }

  if((x==1&&y==1&&z==1&&p==1&&q==1&&r==1)||(grid[i][j]==1)){
    digitalWrite(11, HIGH);
    delay(500);
    digitalWrite(11, LOW);
    delay(500);
    digitalWrite(11, HIGH);
    delay(1000);
    digitalWrite(11, LOW);
    delay(1000);
    digitalWrite(11, HIGH);
    delay(3000);
    digitalWrite(11, LOW);
}
   
}

void move_hard_right(){
       analogWrite(3,0);
       analogWrite(5,0);
       analogWrite(6,0);
       analogWrite(9,140);
  }

  void move_hard_left(){
      analogWrite(3,0);
      analogWrite(5,140);
      analogWrite(6,0);
      analogWrite(9,0);
   }

 void move_soft_right(){
      analogWrite(3,0);
      analogWrite(5,80);
      analogWrite(6,0);
      analogWrite(9,140);
 }

 void move_soft_left(){
      analogWrite(3,0);
      analogWrite(5,120);
      analogWrite(6,0);
      analogWrite(9,70);
   }

 void Stop(){
      analogWrite(3,0);
      analogWrite(5,0);
      analogWrite(6,0);
      analogWrite(9,0);
   }

 void move_straight(){
    if(dir==1){
      i++;
    }
    if(dir==2){
      i++;
      j++;
    }
    if(dir==3){
      j++;
    }
    if(dir==4){
      i++;
      j--;
    }
     if(dir==5){
      i--;
    }
    if(dir==6){
      i--;
      j--;
    }
    if(dir==7){
      j--;
    }
    if(dir==8){
      i--;
      j++;
    }
     analogWrite(3,0);      //3 5 right 6 9 left
     analogWrite(5,140);
     analogWrite(6,0);
     analogWrite(9,160);
     delay(0.03/(0.10472*0.038*150));
 }

