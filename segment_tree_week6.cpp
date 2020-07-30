#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct node{
    int VALUE;
    int L;
    int R;
    struct node* left;
    struct node* right;
};

void build(structy node*, int L, int R){
    if(L==R){
        node->VALUE = L;
    }else{
        build(node->left,L,(L+R)/2);
        build(node->right,((L+R)/2)+1,R);
    }
    if(node->left->VALUE < node->right->VALUE){
        node->VALUE = L;
    }
}
