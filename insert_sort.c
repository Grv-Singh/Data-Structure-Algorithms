#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int length;

void main(){

    int x,i,a[10];
    for(i=0;i<10;i++){
        cout<<"Enter the no."+i;
        cin>>a[x];
    }

    insertion_sort(a,x);
}

void insertion_sort(int a[10], int x){
    for(i=0;i<length;i++){

    }

}

void sort(int a[10]){
    int i,j,b;
    for(j=9;j>0;j--){
        for(i=0;i<j;i++){
            if(a[i]>a[i+1]){
               b=a[i+1];
               a[i+1]=a[i];
               a[i]=b;
            }
        }
    }
}
