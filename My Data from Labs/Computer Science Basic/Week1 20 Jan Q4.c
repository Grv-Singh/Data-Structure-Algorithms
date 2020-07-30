#include<stdio.h>
main(){

int a[10], N, i, k;

for(i=0;i<=9;i++){
    checker(a,i);
                 }

printf("\nInput No. to search..");
scanf("%d",&N);

int result = binary_search(a,N);

if(result!=0){
    printf("\nKey %d is Found at %d", N, result);
            }else{
                    printf("\nKey not Found");
                 }
      }

int checker(int a[], int i){
int j,u=0,k;

printf("Input No. %d..\n",(i+1));
                scanf("%d",&k);
        for(j=0;j<i;j++){
                           if(a[j]>k){ u++; }
                        }

if(u>0){
                printf("\nInvalid Input.. Non Ascending.. %d numbers greater found.. Retype\n",u);
                checker(a,i);

       }else{
                printf("Input Ok!\n");
                a[i]=k;
            }
}

int binary_search(int a[], int X){
    int i;
    for(i=0;i<10;i++){

    if(a[i]==X){
     return i;
    }

    }
                                 }


