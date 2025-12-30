#include<stdio.h>

int i,j;
int maze[5][5]={1,1,0,1,2,0,1,1,0,1,1,0,1,1,1,1,1,0,1,0,0,1,1,0};
char sol[5][5];

void main(){
     solve();
}

int solve(){
    if(move_right()){
            if(maze[i+1][j]){
                     if(move_down()){
                        solve();
                    }
            }else{if(maze[i-1][j]){
                     if(move_up()){
                        solve();
                    }
            }
            }
    }else{
        if(move_left()){
            if(maze[i+1][j]){
                     if(move_down()){
                        solve();
                    }
            }else{if(maze[i-1][j]){
                     if(move_up()){
                        solve();
                    }
            }
            }
        }
    }
}

int move_up(){
    if(maze[i][j]==2){
        printf("\nGot the Cheese!\n");
    }
    while(maze[i][j]!=0 || i!=0){
        sol[i][j]='X';
        i--;
    }sol[i][j]='X';
    printf("\n%d,%d to\n",i,j);
    return 1;
}

int move_down(){
    if(maze[i][j]==2){
        printf("\nGot the Cheese!\n");
    }
    while(maze[i][j]!=0 || i!=4){
        sol[i][j]='X';
        i++;
    }
    printf("\n%d,%d to\n",i,j);
    return 1;
}

int move_right(){
    if(maze[i][j]==2){
        printf("\nGot the Cheese!\n");
    }
    while(maze[i][j]!=0 || j!=4){
        sol[i][j]='X';
        j++;
    }
    printf("\n%d,%d to\n",i,j);
    return 1;
}

int move_left(){
    if(maze[i][j]==2){
        printf("\nGot the Cheese!\n");
    }
    while(maze[i][j]!=0 || j!=0){
        sol[i][j]='X';
        j--;
    }
    printf("\n%d,%d to\n",i,j);
    return 1;
}
