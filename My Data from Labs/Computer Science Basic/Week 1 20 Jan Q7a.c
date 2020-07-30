#include<stdio.h>

void main(){
int a[5]={23,13,3,45,64},b[5];
int i,tempr,j;
for(i=0;i<4;i++){
    for(j=(i+1);j<5;j++){
        if(a[i]>a[j])
        {
        tempr=a[i];
        a[i]=a[j];
        a[j]=tempr;
        }
    }
}

for(i=0;i<5;i++){
    printf("%d ",a[i]);
                }
}
