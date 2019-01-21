#include<stdio.h>
main(){

int a[10], N, i, k;

for(i=0;i<=9;i++){
    checker(a,i,k);
                 }

printf("\nInput No. to search..");
scanf("%d",&N);

int result = binary_search(a,N,0,9);

if(result!=0){
printf("\nKey %d is Found at %d", N, result);
            }else{
                    printf("\nKey not Found");
                 }
      }

int checker(int a[], int i, int k){
int j,u=0;

printf("Input No. %d..\n",(i+1));
                scanf("%d",&k);
        for(j=0;j<i;j++){
                           if(a[j]>k){ u++; }
                        }

if(u>0){
                printf("\nInvalid Input.. Non Ascending.. %d numbers greater found.. Retype\n",u);
                checker(a,i,k);

       }else{
                printf("Input Ok!\n");
                a[i]=k;
            }
}

int mid(int Lo, int Hi){
 int mid=(Lo+Hi)/2;
 return mid;
}

int binary_search(int a[], int X, int Min, int Max){

if(Max<Min){
 return 0;
}
else{
        int Mid = mid(Min,Max);

        if(a[Mid]>X){
            return binary_search(a,X,Min,(Mid-1));
                    }
                    else{

                    if(a[Mid]<X){
            return binary_search(a,X,(Mid+1),Max);
                    }
                    else{
                            return Mid;
                        }

                        }
    }

}
