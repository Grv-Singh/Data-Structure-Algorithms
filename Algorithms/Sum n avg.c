#include<stdio.h>

void main(){
int n,i,s=0,avg,g;
printf("How Many No?");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
printf("No. %d: ",(i+1));
scanf("%d",&g);
a[i]=g;
s=s+a[i];
}
avg = s/n;
printf("Sum is %d and Average is %d",s,avg);
}
