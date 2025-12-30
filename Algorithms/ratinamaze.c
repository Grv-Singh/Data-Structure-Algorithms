#include<stdio.h>

int main(){
        int maze[(4*4)]={1,0,0,0,1,1,0,1,0,1,0,0,1,1,1,1};
        printf("Maze Made!\n Let's Solve..\nRat Placed in the first square..\n");
        Solve(maze);
        return 1;
}

int Solve(int maze[]){
    int i=0,a=1;
    printf("1 -> ");
    while(i!=(4*4)-1){
        if(maze[i+1]!=0){
            i++;
            a++;
printf("%d -> ",i+1);
        }else{
            i=i+4;
            a++;
printf("%d -> ",i+1);
        }
    }
printf("Solved!");
}
