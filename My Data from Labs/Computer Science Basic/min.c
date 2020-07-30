#include<stdio.h>

void main(){
printf("Length of Array? ");
scanf("%d",&n);
int a,h[n];
for(i=0;i<n;i++){
printf("Enter No %d ",(i+1));
scanf("%d",h[i]);
}
int min=h[0];
for(a=0;a<=n;a++){
