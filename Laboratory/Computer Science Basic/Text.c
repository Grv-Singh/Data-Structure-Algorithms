#include<stdio.h>
#include<math.h>

void main(){
int n,i,a,b;

scanf("%d",&n);

for(i=1;i<=4;i++){
a = n%pow(10,i);
b = n/pow(10,i);

switch(a){
case 1: printf("One ");
break;
case 2: printf("Two ");
break;
case 3: printf("Three ");
break;
case 4: printf("Four ");
break;
case 5: printf("Five ");
break;
case 6: printf("Six ");
break;
case 7: printf("Seven ");
break;
case 8: printf("Eight ");
break;
case 9: printf("Nine ");
break;
deafult : printf("Zero ");
}
b=a;
}
}
