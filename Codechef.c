#include<stdio.h>
void main(){
    int a,b,c,d,x=0,y=0,count=0,arayA[10],arayB[10];
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int i=a,j=c;
    while(i<=b && j<=d){
        arayA[x++]=i;
        arayB[y++]=j;
        i++;
        j++;
    }
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            if(arayA[j]<arayB[i]){
                count++;
            }
        }
    }
    printf("%d",count);
}
