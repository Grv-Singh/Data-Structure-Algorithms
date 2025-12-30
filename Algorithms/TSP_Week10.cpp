#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int adj[4][4],chk[4],i,j,m;

int main(){
    for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                cout<<"weight b/w "<<i<<" and "<<j<<" is :\n";
                cin>>adj[i][j];
            }
    }
	
	tsp(adj);
	
	int facto[fact(4)],p=2,num=0;
	
	for(m=0;m<fact(4);m++){
		while(p<=4){
			num=num+(term[i]*(10^(4-p)));
			p++;
		}
		facto[m]=num;		
	}
}

int fact(int n){
	int i,fact=1;
	for(i=n-1;i>=1;i--){
		fact=fact*i;
	}
	return fact;
}

int tsp(int adj[][]){

	int i,j=0,l=0,sum=0;

	for(i=0;i<4;i++){
		while(j<4){
			for(k=0;k<(i+1);k++){
				if(chk[k]==adj[i][j]){
					flag = true;
				}
			}
			if(flag != true || (i!=j)){
				sum=sum+adj[i][j];
				break;
			}
		j++;
		chk[i]=adj[i][j];
		}
	}
	
	sums[l]=sum;

}


