#include<stdio.h>

void main(){
int a,b,c,d,i,j,h[(a*b*c*d)],g[(a*b*c*d)],f[(a*b*c*d)],t[(a*b*c*d)];
printf("Input No.1 : ");
scanf("%d",&a);
printf("Input No.2 : ");
scanf("%d",&b);
printf("Input No.3 : ");
scanf("%d",&c);
printf("Input No.4 : ");
scanf("%d",&d);

for(i=0;i<(a*b*c*d);i++){

h[i]=(a*(i+1));
g[i]=(b*(i+1));
f[i]=(c*(i+1));
t[i]=(d*(i+1));

if(h[i]==g[i]==f[i]==t[i])
{
 printf("LCM of %d, %d, %d, %d is %d",a,b,c,d,h[i]);
 break;
}
}

}


