#include<stdio.h>
#include<stdlib.h>

void main(){
    int x=2;
    factorial(x);
    }

int factorial(int x){
     if(x<2){
        return 1;
     }else{
        return x*factorial(x-1);
     }
 }

