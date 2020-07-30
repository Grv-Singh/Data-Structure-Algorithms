#include<stdio.h>

void main(){
int a[5],i,t=1,b,j,c[100],u=0,l,m=0;

for(i=0;i<5;i++){
scanf("%d",a[i]);
}

for(i=0;i<5;i++){
for(j=1;j<a[i];j++){
b=a[i];

if(b%j==0){
c[u]=j;
m++;
b=b/j;
u++;
}

}
}

for(l=0;l<m;l++){
t=t*a[l];
}

}
