#include<stdio.h>

void main(){

FILE fptr1,fptr2;
char a;

fptr1=fopen(File1.txt,"w+");

fptr2=fopen(File2.txt,"w+");

do{
scanf("%c",a);
a=fputc(a,fptr1);
}while(a!='#');

do{
fgetc(fptr1);
fput(a,fp2);
}while(a!=EOF);

fcloseall();

}
