#include<iostream>
using namespace std;
#include<conio.h>
struct tree
{
    tree *l,*r;
    int data;
}*root = NULL, *p = NULL, *np = NULL, *q;

void create()
{
    int value,c=0;
    while(c<7)
    {
        if(root==NULL)
        {
            root = new tree;
            cout<<"Enter the value of Root Node\n";
            cin>>root->data;
            root->r=NULL;
            root->l=NULL;
        }else
        {
            p=root;
            cout<<"Enter Value of Node\n";
            cin>>value;
            while(true)
            {
                if(value<p->data)
                {
                    if(p->l==NULL)
                    {
                        p->r = new tree;
                        p = p->l;
                        p->data = value;
                        p->l=NULL;
                        p->r=NULL;
                        cout<<"value entered in left\n";
                        break;
                    }
                    else if(p->l != NULL)
                    {
                        p = p->l;
                    }
                }
                else if(value>p->data)
                {
                    if(p->r == NULL)
                    {
                        p->r = new tree;
                        p = p->r;
                        p->data = value;
                        p->l = NULL;
                        p->r = NULL;
                        cout<<"value entered in right\n";
                    break;
                    }
                        else if(p->r !=NULL)
                        {
                            p=p->r;
                        }
            }
        }
        c++;
    }
}
}

void preorder(tree *p)
{
    if (p != NULL)
    {
        cout<<p->data<<endl;
        preorder(p->l);
        preorder(p->r);
    }
}
void postorder(tree *p)
{
    if (p != NULL)
    {
        postorder(p->l);
        postorder(p->r);
        cout<<p->data<<endl;
    }
}
int main()
{
    create();
    cout<<"printing traversal in inorder\n";
    inorder(root);
    cout<<"printing traversal in preorder\n";
    preorder(root);
    cout<<"printing traversal in postorder\n";
    postorder(root);
    getch();
}

void heap_sort(tree *p)
{
    while(p->r!=NULL){

    if (p->r->data > p->data)
    {
        temp = p->data;
        p = p->r;
        p->data = p->r->data;
        p->r->data = temp;
    }
    if (p->l->data > p->data)
    {
        temp = p->data;
        p = p->l;
        p->data = p->l->data;
        p->l->data = temp;
    }
    }
    p=root;
    while(p->l!=NULL){

    if (p->r->data > p->data)
    {
        temp = p->data;
        p = p->r;
        p->data = p->r->data;
        p->r->data = temp;
    }
    if (p->l->data > p->data)
    {
        temp = p->data;
        p = p->l;
        p->data = p->l->data;
        p->l->data = temp;
    }
    }
}
