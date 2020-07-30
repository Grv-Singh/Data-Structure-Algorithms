#include<stdio.h>

void main(){
int i,j,k,l,n;
printf("Enter No. of Rows: ");
scanf("%d",&n);
//for row no
for(i=1;i<=n;i++){

//for spaces
for(j=(n-i);j>=0;j--){
printf(" ");
}
//for no. gradation
for(l=i;l<=((2*i)-1);l++){
printf("%d",l);
}
//for no. downgradation
for(l=((2*i)-2);l>=i;l--){
printf("%d",l);
}

printf("\n");
}

}

