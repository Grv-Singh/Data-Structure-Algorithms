#include<stdio.h>

void main(){

int i=0;

FILE *fp1, *fp2;
char a;

fp1 = fopen("open_1.txt","r");
fp2 = fopen("open_5.txt","w");

while(a !=EOF){
    a=getc(fp1);
    fprintf(fp2,"%c",a);
}

fclose(fp1); fclose(fp2);

}
