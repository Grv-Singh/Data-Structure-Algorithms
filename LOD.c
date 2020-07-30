#include<stdio.h>

void main(){

    struct Queue *Q;
    struct Stack *s = CreateStack();
    struct BinaryTree *temp;
    if(!root){
        return;
    }
    Q = CreateQueue();
    EnQueue(Q,root);

    while(!IsEmptyQueue(Q)){
        temp = Q->front;

        if(temp->right){
            EnQueue(Q,temp->right);
        }
        if(temp->left){
            EnQueue(Q,temp->left);
        }

        temp=DeQueue(Q);
        Push(s,temp);
    }

    while(!IsEmptyStack(s)){
        printf("%d",Pop(s)->data);
    }
}
