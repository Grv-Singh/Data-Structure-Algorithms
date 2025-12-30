#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

enum tower{A='A', B='B', C='C'};

void TowerOfHanoi(int n, tower x, tower y, tower z){
    if(n){
        TowerOfHanoi(n-1,x,y,z);
        cout<<"move top disk from tower "<<char(x)<<" to top of tower "<<char(y)<<endl;
        TowerOfHanoi(n-1,z,y,x);
    }
}

int main(){
    TowerOfHanoi(3,C,A,B);
}

