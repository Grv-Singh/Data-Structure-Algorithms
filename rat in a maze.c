#include<stdio.h>
#include<stdlib.h>

int aray[4][4]={1,0,0,0,1,1,0,2,0,1,0,1,1,1,1,1},arayR[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},i=0,j=0,pos[6];

int assign(int a, int b){
    int x;
    pos[0]=a,pos[1]=b;
    pos[5]=pos[4]=pos[3]=pos[2]=-1;

    switch(a){
            case 0:
                pos[5]=0;
                break;
            case 3:
                pos[3]=0;
                break;
                }
    switch(b){
            case 0:
                pos[4]=0;
                break;
            case 3:
                pos[2]=0;
                break;
                }

        for(x=2;x<6;x++){
        if(pos[x]!=0){
            switch(x){
                case 2:
                    pos[x]=aray[a][b+1];
                    break;
                case 3:
                    pos[x]=aray[a+1][b];
                    break;
                case 4:
                    pos[x]=aray[a][b-1];
                    break;
                case 5:
                    pos[x]=aray[a-1][b];
                    break;
            }
        }
}
    printf("\n(i,j):%d,%d\nto",pos[0],pos[1]);
    return 1;
}


int moveD(){
if(pos[3]==2){
    pos[0]++;
    return 2;
}else{
if(arayR[pos[0]+1][pos[1]]<2){
if(!pos[3]){
    return 1;
}
if(pos[3]==2){
    return 2;
}
if(pos[3]){
    arayR[pos[0]][pos[1]]++;
    pos[0]++;
    assign(pos[0],pos[1]);
    moveD(pos[0],pos[1]);
}
}
else{
    return 1;
}
}
}

int moveR(){
if(pos[2]==2){
    pos[1]++;
    return 2;
}else{
if(arayR[pos[0]][pos[1]+1]<2){
if(!pos[2]){
    return 1;
}
if(pos[2]==2){
    return 2;
}
if(pos[2]){
    arayR[pos[0]][pos[1]]++;
    pos[1]++;
    assign(pos[0],pos[1]);
    moveR(pos[0],pos[1]);
}
}
else{
    return 1;
}
}
}

int moveU(){
if(pos[5]==2){
    pos[0]--;
    return 2;
}else{
if(arayR[pos[0]-1][pos[1]]<2){
if(!pos[5]){
    return 1;
}
if(pos[5]==2){
    return 2;
}
if(pos[5]){
    arayR[pos[0]][pos[1]]++;
    pos[0]--;
    assign(pos[0],pos[1]);
    moveU(pos[0],pos[1]);
}
}
else{
    return 1;
}
}
}

int moveL(){
if(pos[4]==2){
    pos[1]--;
    return 2;
}{
if(arayR[pos[0]][pos[1]-1]<2){
if(!pos[4]){
    return 1;
}
if(pos[4]==2){
    return 2;
}
if(pos[4]){
    arayR[pos[0]][pos[1]]++;
    pos[1]--;
    assign(pos[0],pos[1]);
    moveL(pos[0],pos[1]);
}
}
else{
    return 1;
}
}
}

int solve(){
            if(pos[3]!=0){
                if(moveD()==2){
                                printf("\nVoila!\tRat Got the Cheese at (%d,%d)",pos[0],pos[1]);
                                getchar();
                                exit(0);
                              }else{
                if(moveD()){
                    if(pos[4]!=0 || pos[2]!=0){
                            if(pos[4]!=0){
                                if(moveL()==2){
                                    printf("\nVoila!\tRat Got the Cheese at (%d,%d)",pos[0],pos[1]);
                                    getchar();
                                    exit(0);
                                              }else{
                                if(moveL()){
                                    if(pos[3]!=0 || pos[5]!=0){
                                        if(pos[3]!=0){
                                            solve();
                                        }
                                        if(pos[5]!=0){
                                            solve();
                                        }
                                    }else{
                                        if(moveR()==2){
                                            printf("\nVoila!\tRat Got the Cheese at (%d,%d)",pos[0],pos[1]);
                                            getchar();
                                            exit(0);
                                                    }else{
                                        if(moveR()){
                                            if(pos[3]!=0 || pos[5]!=0){
                                            if(pos[3]!=0){
                                                solve();
                                            }
                                            if(pos[5]!=0){
                                                solve();
                                            }
                                                }
                                        }
                                        }
                                    }
                            }
                            }
                            }
                            if(pos[2]!=0){
                                if(moveR()==2){
                                printf("\nVoila!\tRat Got the Cheese at (%d,%d)",pos[0],pos[1]);
                                getchar();
                                exit(0);
                                          }else{
                                if(moveR()){
                                    if(pos[3]!=0 || pos[5]!=0){
                                        if(pos[3]!=0){
                                            solve();
                                        }
                                        if(pos[5]!=0){
                                            solve();
                                        }
                                    }else{
                                    if(moveL()==2){
                                            printf("\nVoila!\tRat Got the Cheese at (%d,%d)",pos[0],pos[1]);
                                            getchar();
                                            exit(0);
                                                      }else{
                                        if(moveL()){
                                            if(pos[3]!=0 || pos[5]!=0){
                                            if(pos[3]!=0){
                                                solve();
                                            }
                                            if(pos[5]!=0){
                                                solve();
                                            }
                                                }
                                        }
                                        }
                                    }
                            }
                            }
                                        }
                            }
                            else{
                                solve();
                            }
                            }
                            }
                        }
                        if(pos[5]!=0){
                        if(moveU()==2){
                                printf("\nVoila!\tRat Got the Cheese at (%d,%d)",pos[0],pos[1]);
                                getchar();
                                exit(0);
                            }else{
                if(moveU()){
                    if(pos[4]!=0 || pos[2]!=0){
                            if(pos[4]!=0){
                            if(moveL()==2){
                                printf("\nVoila!\tRat Got the Cheese at (%d,%d)",pos[0],pos[1]);
                                getchar();
                                exit(0);
                            }else{
                                if(moveL()){
                                    if(pos[3]!=0 || pos[5]!=0){
                                        if(pos[3]!=0){
                                            solve();
                                        }
                                        if(pos[5]!=0){
                                            solve();
                                        }
                                    }else{
                                    if(moveR()==2){
                                            printf("\nVoila!\tRat Got the Cheese at (%d,%d)",pos[0],pos[1]);
                                            getchar();
                                            exit(0);
                                                      }else{
                                        if(moveR()){
                                            if(pos[3]!=0 || pos[5]!=0){
                                            if(pos[3]!=0){
                                                solve();
                                            }
                                            if(pos[5]!=0){
                                                solve();
                                            }
                                                }
                                        }
                                        }
                                    }
                            }
                            }
                            }
                            if(pos[2]!=0){
                            if(moveR()==2){
                                printf("\nVoila!\tRat Got the Cheese at (%d,%d)",pos[0],pos[1]);
                                getchar();
                                exit(0);
                                          }else{
                                if(moveR()){
                                    if(pos[3]!=0 || pos[5]!=0){
                                        if(pos[3]!=0){
                                            solve();
                                        }
                                        if(pos[5]!=0){
                                            solve();
                                        }
                                    }else{
                                    if(moveL()==2){
                                            printf("\nVoila!\tRat Got the Cheese at (%d,%d)",pos[0],pos[1]);
                                            getchar();
                                            exit(0);
                                                      }else{
                                        if(moveL()){
                                            if(pos[3]!=0 || pos[5]!=0){
                                            if(pos[3]!=0){
                                                solve();
                                            }
                                            if(pos[5]!=0){
                                                solve();
                                            }
                                                }
                                        }
                                        }
                                    }
                            }
                            }
                                        }
                            }else{
                                solve();
                            }
                            }
                            }
                        }
}

void main(){

printf("Problem:\n");
	for(i=0;i<4;i++){
        for(j=0;j<4;j++){
                if(j!=3){
                        printf("%d ",aray[i][j]);
                }else{
                    printf("%d",aray[i][j]);
                }
        }
        printf("\n");
	}
printf("\n");
i=j=0;

assign(i,j);

solve();

}
