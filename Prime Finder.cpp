#include<iostream>
using namespace std;

int main(){
	//code to find if a number is prime or not (could be optimized)
	int i,count=0,j,f;
	for(i=2;i<=300;i++){
		count =0;
		if(i%2==0){
			j=(i/2);
		}else{
			j=(i/2)+1;
		}
		for(f=2;f<=j;f++){
		if((i%f)==0){
			count++;
		}
						}
	if(count>0){
			cout<<i<<" is not Prime\n";
	}else{
		cout<<i<<" is Prime\n";
	}
	
	}
	return 0;
}
