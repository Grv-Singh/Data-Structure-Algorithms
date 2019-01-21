#include<stdio.h>
#include<stdlib.h>

int x;

void main(){
    int aray[7]={30,90,10,80,40,2,70};
    int s = sizeof(aray)/sizeof(aray[0]);
    x=s;
    quicksort(aray,s,x);
}

int quicksort(int aray[], int s){
    int arayR[7]={0,0,0,0,0,0,0};
    int pivot = aray[s-x];
    int i,a=0;
    for(i=0;i<s;i++){
        if(aray[i]<pivot){
            aray[i]=temp;

        }
        }
            arayR[a]=pivot;
            a++;
    for(i=0;i<s;i++){
        if(aray[i]>pivot){
            arayR[a]=aray[i];
            a++;
        }
        }

    for(i=0;i<s;i++){
        printf("%d ",arayR[i]);
    }
    aray=arayR;
    x--;
    getchar();
    quicksort(aray,s);
    return 1;
}
