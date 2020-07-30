#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*start1,*start2,*ptr;

void sort(struct node *hptr){
    int t;
    while(hptr!=NULL)
    {
        start2=hptr->next;
        while(start2!=NULL)
        {
            if(hptr->data>=start2->data)
            {t=hptr->data;
            hptr->data=start2->data;
            start2->data=t;
            }
            start2=start2->next;
        }
        printf("%d\n",hptr->data);
        hptr=hptr->next;
    }
}

void union(struct node *h1ptr,struct node *uptr,struct node *h2ptr){
int t,c=0;
    while(h1ptr!=NULL)
    {
        uptr->data=h1ptr->data;
        h1ptr=h1ptr->next;
        uptr=uptr->next;
    }
    while(h1ptr!=NULL)
    {
        while(h2ptr!=NULL)
        {
            if(h2ptr->data==h1ptr->data){
                c++;
            }
            h2ptr=h2ptr->next;
        }
        if(c==0){
            uptr->data=h2ptr->data;
            h2ptr=h2ptr->next;
            uptr=uptr->next;
        }else{

        }
        h1ptr=h1ptr->next;
    }
}

void intersection(){

}

void reverse(){

}

void traverse(){

}*/
void main()
{char ch;
int n;
start1=ptr=(struct node*)malloc(sizeof(struct node));
while(1){
    printf("enter data");
    scanf("%d",&n);
    ptr->data=n;
    printf("do u want to enter more\n");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y')
    {
        ptr->next=(struct node*)malloc(sizeof(struct node));
        ptr=ptr->next;
    }
    else
    break;
}
ptr->next=NULL;
sort(start1);
}
