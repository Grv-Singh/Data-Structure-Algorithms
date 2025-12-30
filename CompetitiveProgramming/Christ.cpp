#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int fact(int n){
    int fact=1,m=n;
    while(m>=1){
        fact=fact*m;
        m--;
    }
    return fact;
}

int main(){

int t,i=0,n,m;
cin>>t;

if(t<=100000 && t>=1){
    for(i=0;i<t;i++){
        cin >> n >> " " >> m;
        int arr[n];
        if(n<=12500 && n>=1){
            for(j=0;j<n;j++){
                arr[j]=m+(j+1);
                cout<<fact(arr[j])<<"\n";
            }
        }
    }
}

return 0;
}
