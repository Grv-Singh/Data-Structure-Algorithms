#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define LOAD_FACTOR 20

struct ListNode{
    int key;
    int data;
    struct ListNode *next;
};

struct HashTableNode{
    int bcount;
    struct ListNode *next;
};

struct HashTable{
    int tsize;
    int count;
    struct HashTableNode **Table;
};

struct HashTable *CreateHashTable(int size){
    int i;
    struct HashTable *h;
    h = (struct HashTable *)malloc(sizeof(struct HashTable));
    if(!h){
        return NULL;
    }

    h->tsize = size/LOAD_FACTOR;
    h->count = 0;
    h->Table = (struct HashTableNode **)malooc(sizeof(struct HashTableNode *) *h->tsize);

    if(!h->Table){
        printf("Memory Error");
        return NULL;
    }

    for(i=0;i<h->tsize;i++){
        h->Table[i]->next = NULL;
        h->Table[i]->bcount = 0;
    }
    return h;
}

int HashSearch(struct HashTable *h, int data){
    struct ListNode *temp;
    temp = h->Table[Hash(key,h->tsize)]->next;
    while(temp){
        if(temp->data==data)
            return 1;
        temp = temp->next;
    }
    return 0;
}

int HashInsert(struct HashTable *h, int data){
    int index;
    struct ListNode *temp, *newNode;

    if(HashSearch(h,data)){
        return 0;
    }

    index = Hash(key,h->tsize);
    temp = h->Table[index]->next;
    newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    if(!newNode){
        printf("Out Of Space");
        return -1;
    }

    newNode->key = index;
    newNode->data = data;
    newNode->next = h->Table[index]->next;
    h->Table[index]->next = newNode;

    h->Table[index]->bcount++;
    h->count++;
    if(h->count/h->tsize > LOAD_FACTOR){
        Rehash(h);
        return 1;
    }
}

int HashDelete(struct HashTable *h, int data){
    int index;
    struct ListNode *temp;
    index =Hash(data,h->tsize);

    for(temp=h->Table[index]->next,prev=NULL;temp;prev=temp,temp=temp->next){
        if(temp->data==data){
            if(prev!=NULL){
                prev->next = temp->next;
            }
            free(temp);
            h->Table[index]->bcount--;
            h->count--;
            return 1;
        }
    }
    return 0;
}

void Rehash(Struct HashTable *h){
    int oldsize,i,index;
    struct ListNode *p, *temp;
    struct HashTableNode **oldTable;
    oldsize = h->tsize;
    oldTable = h->Table;
    h->tsize = h->tsize*2;

    h->Table= (struct HashTableNode **)malloc(h->tsize*sizeof(struct HashTableNode *));
    if(!h->Table){
        printf("Allocation Failed");
        return;
    }
    for(i=0;i<oldsize;i++){
        for(temp=oldTable[i]->next;temp;temp=temp->next){
            index = Hash(temp->data,h->tsize);
            temp->next = h->Table[index]->next;
            h->Table[index]->next = temp;
        }
    }
}
