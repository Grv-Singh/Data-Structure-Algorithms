#include<stdio.h>

void main()
{

int a[3][3],g=0,i,j;

//input the values
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Input Elements of Array... row=%d , column=%d :",&i,&j);
scanf("%d",&a[i][j]);
}
}

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i!=j){
if(a[i][j]==a[j][i]){g++;}
}
}
}

if(g==pow(3,2)-3){printf("Is a Symmetric Matrix");}
else{
printf("Not a Symmetric Matrix");
}

}
