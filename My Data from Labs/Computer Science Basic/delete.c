#include<stdio.h>
#include<math.h>

void main(){
int a[10],p,n,i,y;

int proc(){
printf("Enter the <Pos>");
scanf("%d",&p);
}

for(i=0;i<=9;i++){
printf("Enter the %d No.",(i+1));
scanf("%d",&y);
a[i]=y;
}
proc();

if(p<=9 && p>=0)
{a[p+1]='\0';}
else{
printf("Out of Bounds!!");
proc();
}

for(i=0;i<=9;i++){
printf("%d\n",a[i]);
}

}
