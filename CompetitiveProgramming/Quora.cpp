#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main(){
	int x;
	cin>>x;
	int arr[x],dlen=0,arrr[x^2],a,p,l,temp,j,k,i=0;
	while(dlen<x){
		arr[dlen]=0;
		dlen++;
	}
	arr[0]=1;
	while(1){
	dlen=0;
	while(arr[dlen]!=0 || dlen==x){
		dlen++;
	}
	a=0;
	for(j=0;j<dlen;j++){
		for(k=0;k<dlen;k++){
			arrr[a]=arr[j]+arr[k];
			a++;
		}
	}
	for(p=0;p<a;p++){
	for(l=0;l<p;l++){
		if(arrr[l]<arrr[l+1]){
			arrr[l]=temp;
			arrr[l]=arrr[l+1];
			arrr[l+1]=temp;
		}
	}
	}
	arr[dlen]=arrr[0];
	if(arr[dlen]==x){
		break;
	}
	}
	int c=0;
	while(c!=dlen){
		cout<<arr[c]<<" ";
		c++;
	}
}
