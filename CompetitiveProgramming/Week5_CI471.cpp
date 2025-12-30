#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdib.h>
using namespace std;

int main(){

}

struct rd_blk_tree_node{
    enum {red,black} colour;
    void *item;
    rd_blk_tree_node *left, *right, *parent;
}

void left_rotate( Tree T, node x ){
    node y;
    y = x->right;
    x->right = y->left;
    if(y->left!=NULL)
        y->left->parent = x;
    y->parent = x->parent;
    if(x->parent == NULL){
        T->root = y;}else{
            if(x==(x->parent)->left){
                    x->parent->left = y;
                }else{
                    x->parent->right = y;
                }
    y->left = x;
    x->parent = y;
}

void right_rotate( Tree T, node y ){
    node x;
    y = x->right;
    x->right = y->left;
    if(x->right!=NULL){
        x->right->parent = y;
    }
    x->parent = y->parent;
    if(y->parent == NULL){
        T->root = x;
    }else{
        if(y==(y->parent)->left){
            y->parent->left = x;
        }else{
            y->parent->right = x;
        }
    x->right = y;
    y->parent = x;
    }
}

void rd_blk_node_insert( Tree T, node x ){

}

void rd_blk_node_delete( Tree T, node x ){

}

void display_tree( Tree T ){

}

