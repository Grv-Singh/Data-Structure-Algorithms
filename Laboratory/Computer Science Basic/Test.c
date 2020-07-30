#include<stdio.h>
#include<math.h>

void main(){

char i,I,N[20],Q1,Q2,Q3,Q4;

FILE *fp1,*fp2,*fp3;

fp1 = fopen("Data.txt","w+");
//fprintf(fp1,"Name\tID\tQuiz 1(Out of25)\tQuiz 2(Out of25)\tQuiz 3(Out of25)\tQuiz 4(Out of25)\n");

for(i=1;i<=5;i++){
    printf("\tName? ");
    scanf("%s",&N);
    printf("\n");

    printf("\tID? ");
    scanf("%d",&I);
    printf("\n");

    printf("\tQuiz 1 Marks? ");
    scanf("%d",&Q1);
    printf("\n");

    printf("\tQuiz 2 Marks? ");
    scanf("%d",&Q2);
    printf("\n");

    printf("\tQuiz 3 Marks? ");
    scanf("%d",&Q3);
    printf("\n");

    printf("\tQuiz 4 Marks? ");
    scanf("%d",&Q4);
    printf("\n");

    fprintf(fp1,"%s\t%d\t%d\t%d\t%d\t%d\t",N,I,Q1,Q2,Q3,Q4);

}

fclose(fp1);

int id[5],a[5],b[5],c[5],d[5],e[5],f[5],j,k,l;
char name[5][10];

fp2 = fopen("Data.txt","r");

//fscanf(fp2,"\n");

for(j=0;j<5;j++){
fscanf(fp2,"%s\t%d\t%d\t%d\t%d\t%d\t",name[j],id[j],a[j],b[j],c[j],d[j]);
e[j]=a[j]+b[j]+c[j]+d[j];
}

printf("\nList for More than 70%:\n");

for(k=0;k<5;k++){
if(e[k]>70){
printf("%s\t%d\n",name[k],id[k]);
}
}

fclose(fp2);

printf("\n======================= Q1 ======================\n");
/*
fp3 = fopen("Data.txt","r");

for(l=0;l<5;l++){
}

f[l]=

fclose(fp3);*/
}

