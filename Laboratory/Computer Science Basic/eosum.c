#include<stdio.h>
#include<math.h>


void main(){
int a[10],o=0,e=0,i,y;

    for(i=0;i<=9;i++){
printf("Enter the %d No.",(i+1));
scanf("%d",&y);
a[i]=y;
if((i+1)%2==0)
{
        o=o+a[i];
}
else{
    e=e+a[i];
    }
}
    printf("Sum of\n Even No.s is %d \n Odd No. is %d \n",e,o);
}
