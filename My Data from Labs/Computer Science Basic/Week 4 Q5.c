#include<stdio.h>

void main(){

int i=0,k=0,j,q;

FILE *fp1, *fp2;
char a,b;

fp1 = fopen("open_1.txt","r");
fp2 = fopen("open_5.txt","r");


do{
        do{
            if(a!=EOF){
                a=fgetc(fp1);
                printf("%c",a);
            }else{
                    do{
                        b=fgetc(fp2);
                        printf("%c",b);
                    }while(b!='\n');
            }
        }while((a!='\n') && (a!=EOF));

        do{
            if(b!=EOF){
                b=fgetc(fp2);
                printf("%c",b);
            }else{
                    do{
                        a=fgetc(fp1);
                        printf("%c",a);
                    }while(a!='\n');
            }
        }while((b!='\n') && (b!=EOF));
}while((a!=EOF) || (b!=EOF));

fclose(fp1); fclose(fp2);

}
