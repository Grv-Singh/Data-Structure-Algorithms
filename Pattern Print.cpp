#include<iostream>
using namespace std;

int main(){
	//code to make a diamond of '*'
	int i,j,k;
	for(i=1;i<=3;i++){
		for(j=1;j<=(3-i);j++){
		cout<<" ";
								 }
		for(k=1;k<=((2*i)-1);k++){
		cout<<"*";
								 }
	cout<<"\n";
}
	for(i=2;i>=1;i--){
		for(j=1;j<=(3-i);j++){
		cout<<" ";
								 }
		for(k=1;k<=((2*i)-1);k++){
		cout<<"*";
								 }
	cout<<"\n";
}
	return 0;
}
