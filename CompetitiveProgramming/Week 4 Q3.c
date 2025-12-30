#include<stdio.h>

void main(){

int i=0;

FILE *fp1, *fp2;
int a,b;

fp1 = fopen("open_1.txt","r");
fp2 = fopen("open_2.txt","r");

    a=getc(fp1);
    b=getc(fp2);

while((a==b) && (a !=EOF) && (b !=EOF)){
    a=getc(fp1);
    b=getc(fp2);
}
if(a==b){
    printf("Files are Identical!");
}else{
    printf("Files are Non-Identical!");
}

fclose(fp1); fclose(fp2);
return(0);
}
