#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

struct scorel
{
    int no;
    struct scorel *rp;
};

struct namel
{
    char a[10];
    struct scorel *rp;
    struct namel *dp;
};

int main()
{

int i,j,n,m;

struct namel *temp,*head,*end,**s;
struct scorel *tmp,*had,*nd;

//clrscr();
printf("enter no of students");
scanf("%d",&n);

end=NULL;

for(i=0;i<n;i++)
{
    temp=(struct namel*)malloc(sizeof(struct namel));
    printf("enter name\n");
    scanf("%s",temp->a);
    temp->rp=NULL;
    temp->dp=NULL;
    *(s+i)=temp;
    if(end==NULL)
    {
        end=head=temp;
    }
    else
    {
        end->dp=temp;
        end=temp;
    }
    printf("enter no of scores");
    scanf("%d",&m);
    nd=NULL;
    for(j=0;j<m;j++)
    {
        tmp=(struct scorel*)malloc(sizeof(struct scorel));
        printf("enter score\n");
        scanf("%d",&tmp->no);
        tmp->rp=NULL;
        if(nd==NULL)
        {
            nd=had=tmp;
            temp->rp=tmp;
        }else
        {
            nd->rp=tmp;
            nd=tmp;
        }
    }
}
for(i=0;i<n;i++)
{
    temp=*(s+i);
    printf("%s-->",temp->a);
    tmp=temp->rp;
    while(tmp!=NULL)
    {
        printf("%d-->",tmp->no);
        tmp=tmp->rp;
    }
    printf("\n");
}
//getch();

return 0;
}

