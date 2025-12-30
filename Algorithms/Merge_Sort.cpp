#include<stdlib.h>
#include<iostream>
using namespace std;

int n=14,aray[14]={34,10,39,34,35,35,19,9,28,39,44,21,8,42},b[10]={0};

void merge(int low, int mid, int high){
    int l1, l2, i;

    for(l1=low,l2=(mid+1),i=low;l1<=mid&&l2<=high;i++){
        if(aray[l1]<aray[l2]){
            b[i]=aray[l1++];
        }else{
            b[i]=aray[l2++];
        }
    }
        while(l1<=mid){
            b[i++]=aray[l1++];
        }
        while(l2<=high){
            b[i++]=aray[l2++];
        }
        for(i=low;i<=high;i++){
            aray[i]=b[i];
        }
}

int sort(int low, int high){
        int mid;
        if(low<high){
            mid=(low+high)/2;
            sort(low,mid);
            sort((mid+1),high);
            merge(low,mid,high);
        }else{
            return 0;
        }
        return 0;
}

int main(){

int i;

   cout<<"List before sorting\n";

   for(i=0;i<=n;i++){
      cout<<aray[i]<<" ";}

   sort(0,n);

   cout<<"\nList after sorting\n";

   for(i=0;i<=n;i++){
      cout<<aray[i]<<" ";}

    return 0;
}
