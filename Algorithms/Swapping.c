#include<stdio.h>

main(){
int a,b,c=0;
printf("Enter a Value:");
scanf("%d",&a);
printf("Enter a Value:");
scanf("%d",&b);
c=a;
b=a;
b=c;
printf("Swapped Values with using Temp.Variable: A=%d, B=%d",a,c);
//error hai

printf("Enter a Value:");
scanf("%d",&a);
printf("Enter a Value:");
scanf("%d",&b);
printf("Swapped Values without using Temp.Variable: A=%d, B=%d",b,a);
}
