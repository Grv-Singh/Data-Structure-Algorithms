#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void ini(int n){
    int array[2*n],i;

    for(i=0;i<(2*n);i++){
        array[i]=0;
    }

    if(fill(n,n,array)){
        printf("Array is: [");
        for(i=0;i<(2*n);i++){
            printf(" %d",array[i]);
        }
        printf(" ]");
    }else{
        printf("Not Possible!");
    }

}

fill(int n, int a, int array[])
{
if(a==0){
    return true;
}
int i;
    for(i=0;i<2*n-a-1;i++){
    if(array[i]==0 && array[i+(a+1)]==0){
        array[i]=array[i+(a+1)]=a;
            if(fill(n,a-1,array)){
                return true;
            }
        array[i]=array[i+(a+1)]=0;
        }
        }
    return false;
}

int main(){
ini(7);
return false;
}
