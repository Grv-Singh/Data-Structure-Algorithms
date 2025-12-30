#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;


//x denotes the xth task and the total time till then.
int Fi(int time[], int x){
    int i=0,sum=0;
    while(i<x){
        sum=sum+time[i];
    }
    return sum;
}

//y denotes the time in which it is done, x denotes the xth task.
int Pi(int time[], int x, int y){
    if(y<time[x]){
        return 0;
    }else{
        return 10;
    }
}

int optnocons(int time[], int n){

int taken[n];
m=0;
while(m<n){
    cout<<"Input time taken for task "<<m<<"\n";
    cin>>p;
    m++;
}

cout<<"The Minimum time is: "<<min;

}

int main(){

int n,p,min=0;
cout<<"Input No. of Jobs?";
cin>>n;

int time[n],i=0;
cout<<"Input time for each Task?";

while(i<n){
    cout<<"Time for Job "<<i<<"\n";
    cin>>time[i];
    i++;
}

}
