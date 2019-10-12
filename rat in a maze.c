#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int array[4][4]={1,0,0,0,1,1,0,1,0,1,0,0,1,1,1,1},arrayR[4][4]={1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},pos[6];
int i=0,j=0;

void main(){

}

hunt(){
        if(order=1){
            if(pos[2]==1){
                if(pos[3]==0){
                    moveR(i,j,array,arrayR);
                }
                if(pos[3]==1){
                    moveD(i,j,array,arrayR);
                }
            }
            if(pos[2]==0 && pos[3]==1){
                moveD(i,j,array,arrayR);
            }
        }
            if(order=0){
                if(pos[4]==1 && pos[5]==0){
                    moveU(i,j,array,arrayR);
                }
                if(pos[4]==0 && pos[5]==1){
                    moveL(i,j,array,arrayR);
                }
            }
}

moveD(int i, int j, int array[][], int arrayR[][]){

if(array[i+1][j]==0){
    array[i][j]=0;
        i++;
    array[i][j]=2;
    arrayR[i][j]=1;
    pos[6]={i,j,array[i][j+1],array[i+1][j],array[i][j-1],array[i-1][j]};
}else{
    return 1;
}

}

moveR(int i, int j, int array[][], int arrayR[][]){

if(array[i][j+1]==0){
    array[i][j]=0;
        j++;
    array[i][j]=2;
    arrayR[i][j]=1;
    //moveR(i,j,aray,arayR);
    pos[6]={i,j,array[i][j+1],array[i+1][j],array[i][j-1],array[i-1][j]};
}
if(array[i][j+1]==1){
    return 1;
}
if(array[i][j+1]==2){
    return 2;
}

}

moveU(int i, int j, int array[][], int arrayR[][]){

if(array[i-1][j]==0){
    array[i][j]=0;
        i--;
    array[i][j]=2;
    arrayR[i][j]=1;
    moveU(i,j,array,arrayR);
}else{
    return 1;
}

}

moveL(int i, int j, int array[][], int arrayR[][]){

if(array[i][j-1]==0){
    array[i][j]=0;
        j--;
    array[i][j]=2;
    arrayR[i][j]=1;
    moveL(i,j,array,arrayR);
}else{
    return 1;
}

}
