#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

void my_sort(int n, int org[], int copy[]){
        int smallest=0,i,j,k;

        for(j=0;j<n;j++){
            i=0, smallest = org[0];

            while(org[i]!='\0'){
               if(org[i]<smallest){
                    smallest = org[i];
               }
               i++;
            }

            i=0;

            while(org[i]!='\0'){
               if(org[i] == smallest){
                    k = i;
                    while(org[k+1]!='\0'){
                        org[k] = org[k+1];
                        k++;
                    }
                    org[k+1]='\0';
               }
               i++;
            }

        copy[j] = smallest;
        }
}

int main(){

cout<<"Input the Size : ";

int n,i;
cin>>n;

int ary[n];

//make an empty array for my sort
int ary1[n];

cout<<"Input the Numbers\n";

for(i=0;i<n;i++){
    cout<<"Element "<<(i+1)<<" : ";
    cin>>ary[i];
}

my_sort(n,ary,ary1);

for(i=0;i<n;i++){
    cout<<ary1[i]<<"\n";
}

}
