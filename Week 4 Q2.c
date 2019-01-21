#include<stdio.h>

void main(){

FILE *fp;

fp = fopen("open.txt","a+");

int i,n;

printf("Input No. Of Entries... \t");
scanf("%d\n",n);

int input[n];

printf("Input Entries...\n");
for(i=0;i<n;i++){
    scanf("%d\n",input[i]);
    fprintf(fp,"%d\n",input[i]);
}
fclose(fp);
char o;

printf("L/S?\n");
scanf("%c\n",o);

int g = findlarsmal(n,input,o);

fp = fopen("open.txt","a+");
if(o=='l'){
printf("Largest is %d",g);
fprintf(fp,"Largest number is %d\n",g);
}
if(o=='s'){
printf("Smallest is %d",g);
fprintf(fp,"Smallest Number is %d\n",g);
}
fclose(fp);
}

int findlarsmal(int n, int input[(n-1)], int o){

int x;
int big=input[0],small=input[0];
for(x=0;x<n;x++){

    if(big<input[x]){
        big=input[x];
    }
    if(small>input[x]){
        small=input[x];
    }
}

if(o=='l'){
return big;
}
if(o=='s'){
return small;
}

}

