#include<stdio.h>
main(){

int a[10]={1,2,3,4,5,6,7,8,9,10};
int i, N;

printf("Enter the no. to Search... ");
scanf("%d",&N);
for(i=0;i<=9;i++){
    if(a[i]==N)
    {
        printf("The No. %d is present at %d", N, (i+1));
    }
                }

}
