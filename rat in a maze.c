#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int aray[4][4]={1,0,0,0,1,1,0,1,0,1,0,0,1,1,1,1},arayR[4][4]={1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},pos[6];
int i=0,j=0;

void main(){

}

hunt(){
        if(order=1){
            if(pos[2]==1){
                if(pos[3]==0){
                    moveR(i,j,aray,arayR);
                }
                if(pos[3]==1){
                    moveD(i,j,aray,arayR);
                }
            }
            if(pos[2]==0 && pos[3]==1){
                moveD(i,j,aray,arayR);
            }
        }
            if(order=0){
                if(pos[4]==1 && pos[5]==0){
                    moveU(i,j,aray,arayR);
                }
                if(pos[4]==0 && pos[5]==1){
                    moveL(i,j,aray,arayR);
                }
            }
}

moveD(int i, int j, int aray[][], int arayR[][]){

if(aray[i+1][j]==0){
    aray[i][j]=0;
        i++;
    aray[i][j]=2;
    arayR[i][j]=1;
    pos[6]={i,j,aray[i][j+1],aray[i+1][j],aray[i][j-1],aray[i-1][j]};
}else{
    return 1;
}

}

moveR(int i, int j, int aray[][], int arayR[][]){

if(aray[i][j+1]==0){
    aray[i][j]=0;
        j++;
    aray[i][j]=2;
    arayR[i][j]=1;
    //moveR(i,j,aray,arayR);
    pos[6]={i,j,aray[i][j+1],aray[i+1][j],aray[i][j-1],aray[i-1][j]};
}
if(aray[i][j+1]==1){
    return 1;
}
if(aray[i][j+1]==2){
    return 2;
}

}

moveU(int i, int j, int aray[][], int arayR[][]){

if(aray[i-1][j]==0){
    aray[i][j]=0;
        i--;
    aray[i][j]=2;
    arayR[i][j]=1;
    moveU(i,j,aray,arayR);
}else{
    return 1;
}

}

moveL(int i, int j, int aray[][], int arayR[][]){

if(aray[i][j-1]==0){
    aray[i][j]=0;
        j--;
    aray[i][j]=2;
    arayR[i][j]=1;
    moveL(i,j,aray,arayR);
}else{
    return 1;
}

}
