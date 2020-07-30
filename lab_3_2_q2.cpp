#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main(){
int i,min;
node *root;
root = new node;

for(i=0;i<5;i++){
    scanf("%d%s",root->num,root->color);
    if(i!=4){
        root=root->next;
    }
}

min=root->num;

for(i=0;i<5;i++){
    if(root->num>min){
        min=root->num;
    }
    root=root->next;
}

for(i=0;i<5;i++){
        if(root->color=="Red"){

        }
}

return 0;

}

struct node{
    int num;
    char color[10];
    node *next;
};

