#include<stdio.h>
#include<math.h>


void main(){
int a[5],b[5],c[10],y,i,w;

for(i=0;i<=4;i++){
printf("Enter the No.s");
scanf("%d,%d",&y,&w);
a[i]=y;
b[i]=w;
}

    for(i=0;i<=9;i++){
if(i<5){
c[i]=a[i];
}
if(i>=5){
c[i]=b[i-5];
}
}

for(i=0;i<=9;i++){
printf("%d\n",c[i]);
}

}
