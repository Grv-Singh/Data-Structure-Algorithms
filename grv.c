#include<stdio.h>

main(){

int i,j,a;
for(a=1;a<=4;a++){

if(a==1 || a==4){
for(i=1;i<=11;i++){
printf("_");
}
}

if(a==2||a==3){
for(j=1;j<=11;j++){
if(j==1||j==11){
printf("_");
}
else{printf(" ");}
}
}

printf("\n");
}

}
