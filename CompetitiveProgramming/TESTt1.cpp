#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct node{
    int x;  //Data
    struct node *left;
    struct node *right;
    struct node *parent;
    int y;  //Priority
};

//Priority is Descending, Highest with Root

node* root;

void rotateleft(struct node*){
    node* temp = node->left->parent;
    node->left->parent = node->parent;
    node->parent = temp;
}

void rotateright(struct node*){
    node* temp = node->right->parent;
    node->right->parent = node->parent;
    node->parent = temp;
}

void heapify(struct node*){

    while(node->left!=node->right==NULL){
    int *MINl;
    if(node->left<node->right){
        MINl=node->left;
    }else{
        if(node->left>node->right){
            MINl=node->right;
        }else{
            MINl=node->right;
        }
    }
        if(node->y>MINl->y && MINl=node->left){
            rotateright(MINl);
        }else{
            if(node->y>MINl->y && MINl=node->right){
                rotateleft(MINl);
            }
        }
    heapify(node->left);
    heapify(node->right);
    node=node->left;
    }

    node=root;

    while(node->left!=node->right==NULL){
    int *MINr;
    if(node->left<node->right){
        MINr=node->left;
    }else{
        if(node->left>node->right){
            MINr=node->right;
        }else{
            MINr=node->right;
        }
    }
        if(node->y>MINr->y && MINr=node->left){
            rotateright(MINr);
        }else{
            if(node->y>MINr->y && MINr=node->right){
                rotateleft(MINr);
            }
        }
    heapify(node->left);
    heapify(node->right);
    node=node->right;
    }

}

void insert(struct node*, int x, int y){
    if(node->data==NULL){
        node->x=x;
    }
    if(x<node->data){
        node=node->left;
        node->x=x;
    }else{
        if(x>node->data){
            node=node->right;
            node->x=x;
        }
    }
    node->y=y;
    heapify(node);
}

int main(){
    int n,i=0,x,y;
    cout<<"No of Nodes?";
    cin>>n;

    while(i<n){
        cin>>x>>" ">>y;
        insert(node,x,y);
        i++;
    }


}
