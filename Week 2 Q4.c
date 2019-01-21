#include<stdio.h>

void main(){

int arra[5]={1,2,2,2,3}, arrb[5]={2,3,2,1,2}, arrc[3]={1,2,4};

compare(arra,arrb);

//compare(arrb,arrc);

//compare(arra,arrc);

}

void compare(int arr1[], int arr2[]){

int i,j,k,sum=0,var=0;
int count[5]={0,0,0,0,0};
int *p=arr1;

for(i=0;i<5;i++){
int *q=arr2;
    for(j=0;j<5;j++){
            if(*p!=var){
            if(*p==*q){ count[i]++; }
            q++;
            }else{ break; }
                    }
                    if(count>=2){
                        var=*p;
                    }
                    p++;
                }

for(k=0;k<5;k++){
        sum=sum+count[k];
        //printf("Sum is %d and no is %d\n", sum, count[k]);
                }

if(sum==5){
    printf("The Arrays are Similar\n");
        }else{ printf("The Arrays are Not Similar\n"); }

}
