#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main(){
struct reg *temp;
int regID;
clrscr();

do{
struct reg *new_reg,*current;
pstart=start;
new_reg=(struct reg *)malloc(sizeof(struct reg));

printf("\nEnter RegionID:");
fflush(stdin);
scanf("%d",);
}

}

struct reg
{
    struct reg *prev;
    int regID;
    struct reg *regbndry;
    struct reg *next;
};

struct reg *pstart=NULL,*start=NULL;
