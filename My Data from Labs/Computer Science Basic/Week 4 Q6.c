#include<stdio.h>

void main(){

int i,j,k;

FILE *fp1, *fp2;
char B[2],N[20],sort_B[10][2],sort_N[10][20];
int a,sort_a[10];

fp1 = fopen("Records.txt","w+");
fprintf(fp1,"Sno\tBranch\tName\n");

for(i=1;i<=10;i++){
    printf("%d\t",i);
    printf("Branch? ");
    scanf("%s",&B);
    printf("\tName? ");
    scanf("%s",&N);
    printf("\n");

    fprintf(fp1,"%d\t%s\t%s\n",i,B,N);
}

for(j=0;j<10;j++){
    fscanf(fp1,"%d\t%s\t%s\n",sort_a[j],sort_B[j],sort_N[j]);
}

for(k=0;k<10;k++){
    if(sort_B[k]=="CS"){
    printf("CS Branch\n");
    printf("%d\t%s\t%s\n",sort_a[k],sort_B[k],sort_N[k]);
    }
    if(sort_B[k]=="IT"){
    printf("IT Branch\n");
    printf("%d\t%s\t%s\n",sort_a[k],sort_B[k],sort_N[k]);
    }
    if(sort_B[k]=="BT"){
    printf("BT Branch\n");
    printf("%d\t%s\t%s\n",sort_a[k],sort_B[k],sort_N[k]);
    }
}

fclose(fp1);
}
