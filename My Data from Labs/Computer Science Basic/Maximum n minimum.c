#include<stdio.h>

void main()
{

int a[8],n,b,max,min;
printf("Input Elements of Array... ");
for(n=0;n<8;n++)
{
scanf("%d",&a[n]);

if(n==0)
{
    max=min=a[n];
}
if(a[n]>max)
 {max=a[n];}
else if(a[n]<min)
  {min=a[n];}
}
printf("\nmax=%d min=%d",max,min);

}
