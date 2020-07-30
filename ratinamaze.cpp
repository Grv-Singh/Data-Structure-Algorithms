#include<stdio.h>

int main(){
        int maze = Maze();
        printf("Maze Made!\n Let's Solve..\nRat Placed in the first square..\n");
        Solve(maze);
        return 1;
}

int Maze(){
    int maze[(4*4)]={1,0,0,0,0,0,1,0,0,1,0,0,1,1,1,1};
    return maze;
}

int Solve(int maze){
    int i=0,a=1;
    printf("Position %d:%d",a,i);
    while(i<(4*4)){
        if(maze[i+1]!=0){
            a++;
            moveF(a,i);
        }else{
            a++;
            moveD(a,i);
        }
        i++;
    }
}

int moveF(int a,int i){
    i++;
    printf("Position %d:%d",a,i);
        return 1;
}

int moveD(int a,int i){
    i=i+4;
    printf("Position %d:%d",a,i);
        return 1;
}
