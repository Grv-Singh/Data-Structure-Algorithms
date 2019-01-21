#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long x,p;
    char j[3];
    int aray[]={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(aray)/sizeof(aray[0]),i;
    for(i=n/2;i>0;i--){
        heapify(aray,i);
    }
    cin>>x;
    p=x;
    while(p>=1){
        cin>>j;
        if(j[0]='1'){
            add(aray,j[2]);
        }
        if(j[0]='2'){
            delete(aray,j[2]);
        }
        if(j[0]='3'){
            print_min(aray);
        }
        p--;
    }
        return 0;
}

void heapify(int aray[], int i){
    int n = sizeof(aray)/sizeof(aray[0]),temp;
    if((2*i<=n)&&(aray[i]<aray[2*i])){
        temp=aray[2*i];
        aray[2*i]=aray[i];
        aray[i]=temp;
    }
    if(((2*i+1)<=n)&&(aray[i]<aray[(2*i+1)])){
        int n = sizeof(aray)/sizeof(aray[0]);
        temp=aray[(2*i+1)];
        aray[(2*i+1)]=aray[i];
        aray[i]=temp;
    }
}

void add(int aray[], int e){
    int n = sizeof(aray)/sizeof(aray[0]);
    aray[n]=e;
}

void delete(int aray[], int e){
    int n = sizeof(aray)/sizeof(aray[0]),i;
    for(i=0;i<n;i++){
        if(aray[i]==e){
            aray[i]='\0';
        }
    }
}

void print_min(int aray[]){
    int n = sizeof(aray)/sizeof(aray[0]);
    int min=aray[0];
    for(i=0;i<n;i++){
     if(aray[i]<min){
        min=aray[i];
            }
    }
    cout<<min;
}
