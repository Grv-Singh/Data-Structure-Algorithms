#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int aray[8][8];
	char aray1[8][8];
	int i,j,k,l,m,n,p=0,a=0;
	bool flag;

	mkaray(i,j,aray,aray1);

	printaray(i,j,aray,aray1);


	    {
	    for(i=0;i<8;i=i+2){
            for{}
	    }

            if(aray[i][j]!=1){
                aray[i][j]=1;
                aray1[i][j]='Q';
                a++;
            for(k=0;k<8;k++){
                aray[i][k]=1;
            }
            for(l=0;l<8;l++){
                aray[l][j]=1;
            }
            for(m=i+1,n=j+1;m<8 && n<8;m++,n++){
                            aray[m][n]=1;
                }
            for(m=i+1,n=j-1;m<8 && n>0;m++,n--){
                            aray[m][n]=1;
                }
            for(m=i-1,n=j+1;m>0 && n<8;m--,n++){
                            aray[m][n]=1;
                }
            for(m=i-1,n=j-1;m>0 && n>0;m--,n--){
                            aray[m][n]=1;
                }
        }

        }

printf("\n");
	for(i=0;i<8;i++){
        for(j=0;j<8;j++){
                if(j!=7){
                        printf("%d ",aray[i][j]);
                }else{
                    printf("%d",aray[i][j]);
                }
        }
        printf("\n");
	}
printf("\n");
	for(i=0;i<8;i++){
        for(j=0;j<8;j++){
                if(j!=7){
                        printf("%c ",aray1[i][j]);
                }else{
                    printf("%c",aray1[i][j]);
                }
        }
        printf("\n");
	}
}

mkaray(int i,j,aray,aray1){
	for(i=0;i<8;i++){
        for(j=0;j<8;j++){
                aray[i][j]=0;
                aray1[i][j]='x';
        }
	}
}

printaray(i,j,aray,aray1){
	for(i=0;i<8;i++){
        for(j=0;j<8;j++){
                if(j!=7){
                        printf("%d ",aray[i][j]);
                }else{
                    printf("%d",aray[i][j]);
                }
        }
        printf("\n");
	}
printf("\n");

for(i=0;i<8;i++){
        for(j=0;j<8;j++){
                if(j!=7){
                        printf("%c ",aray1[i][j]);
                }else{
                    printf("%c",aray1[i][j]);
                }
        }
        printf("\n");
	}
printf("\n");
}
