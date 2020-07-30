#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

void Perm(int a[], int k, int n){
    if(k==n){
        for(int i=1; i<=n; i++){
            cout<<a[i]<<" ";
            cout<<endl;
        }
    }else{
        for(int i=k; i<=n; i++){
            int t=a[k];
            a[k]=a[i];
            a[i]=t;
            Perm(a,k+1,n);
            t=a[k];
            a[k]=a[i];
            a[i]=t;
        }
    }
}

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    Perm(a,5,7);
}
