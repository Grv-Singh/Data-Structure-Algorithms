#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int aray[4][4]={1,0,0,0,1,1,0,1,0,1,0,0,2,1,1,1},arayR[4][4]={1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},pos[6];
int i=0,j=0;

void main(){
    hunt(pos,i,j,aray,arayR);
}

hunt(int pos[],int i,int j,int aray[][], int arayR[][]){
            if(pos[3]==1){
                if(moveD(i,j,aray,arayR)){
                    if(pos[4]==1){
                            if(moveL(i,j,aray,arayR)){
                                moveR(i,j,aray,arayR);
                            }
                            if(moveL(i,j,aray,arayR)==2){
                                printf("Voila!");
                            }
                            }
                    if(pos[2]==1){
                            if(moveR(i,j,aray,arayR)){
                                moveL(i,j,aray,arayR);
                            }
                            if(moveR(i,j,aray,arayR)==2){
                                printf("Voila!");
                            }
                            }
                    if(pos[5]==1){
                            if(moveU(i,j,aray,arayR)){
                                    if(pos[4]==1){
                                if(moveL(i,j,aray,arayR)){
                                    moveR(i,j,aray,arayR);
                                }
                                if(moveL(i,j,aray,arayR)==2){
                                    printf("Voila!");
                                }
                                                }
                                    if(pos[2]==1){
                            if(moveR(i,j,aray,arayR)){
                                moveL(i,j,aray,arayR);
                            }
                            if(moveR(i,j,aray,arayR)==2){
                                printf("Voila!");
                            }
                                                }
                        }
                        if(moveU(i,j,aray,arayR)==2){
                                printf("Voila!");
                            }
                                }
                }
                if(moveD(i,j,aray,arayR)==2){
                    printf("Voila!");
                }
            }
}

int moveD(int i, int j, int aray[][], int arayR[][]){
if(arayR<=2){
if(aray[i+1][j]==1){
    pos[6]={i,j,aray[i][j+1],aray[i+1][j],aray[i][j-1],aray[i-1][j]};
    i++;
    arayR[i][j]++;
    moveD(i,j,aray,arayR);
}
if(aray[i+1][j]==0){
    return 1;
}
if(aray[i+1][j]==2){
    return 2;
}
}
else{
    return 1;
}
}

int moveR(int i, int j, int aray[][], int arayR[][]){
if(arayR<=2){
if(aray[i][j+1]==1){
    pos[6]={i,j,aray[i][j+1],aray[i+1][j],aray[i][j-1],aray[i-1][j]};
    j++;
    arayR[i][j]++;
    moveR(i,j,aray,arayR);
}
if(aray[i][j+1]==0){
    return 1;
}
if(aray[i][j+1]==2){
    return 2;
}
}
else{
    return 1;
}
}

moveU(int i, int j, int aray[][], int arayR[][]){
if(arayR<=2){
if(aray[i-1][j]==1){
    pos[6]={i,j,aray[i][j+1],aray[i+1][j],aray[i][j-1],aray[i-1][j]};
    i--;
    arayR[i][j]++;
    moveU(i,j,aray,arayR);
}
if(aray[i-1][j]==0){
    return 1;
}
if(aray[i-1][j]==2){
    return 2;
}
}
else{
    return 1;
}
}

moveL(int i, int j, int aray[][], int arayR[][]){
if(arayR<=2){
if(aray[i][j-1]==1){
    pos[6]={i,j,aray[i][j+1],aray[i+1][j],aray[i][j-1],aray[i-1][j]};
    j--;
    arayR[i][j]++;
    moveL(i,j,aray,arayR);
}
if(aray[i][j-1]==0){
    return 1;
}
if(aray[i][j-1]==2){
    return 2;
}
}
else{
    return 1;
}
}
