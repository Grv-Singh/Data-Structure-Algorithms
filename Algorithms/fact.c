#include<stdio.h>

void main(){

int a;
scanf("%d",&a);

int b=a,fact=1;
while(b>0){
	fact = fact*b--;
}

printf("%d",fact); 

}
