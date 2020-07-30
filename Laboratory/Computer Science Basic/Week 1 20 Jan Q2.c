#include<stdio.h>
main(){

int a[10]={1,2,3,5,4,6,7,8,9,10}, N;

printf("Enter the no. to Search... ");
scanf("%d",&N);
func(N,0,a);
      }

int func(int N, int i, int a[]){
if((a[i]==N) && (i<=9))
    {
        printf("The No. %d is present at %d", N, (i+1));
    }
    else{
            func(N,(i+1),a);
        }
                              }
