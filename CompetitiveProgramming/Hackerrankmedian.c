#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sort(int aray[],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(aray[i]<=aray[pivot]&&i<last)
                 i++;
             while(aray[j]>aray[pivot])
                 j--;
             if(i<j){
                 temp=aray[i];
                  aray[i]=aray[j];
                  aray[j]=temp;
             }
         }

         temp=aray[pivot];
         aray[pivot]=aray[j];
         aray[j]=temp;
         sort(aray,first,j-1);
         sort(aray,j+1,last);

    }

void median(int aray[],int n){
        printf("%d",aray[(n/2)+1]);
}

int main(){
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int aray[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d ",&aray[i]);
    }
    sort(aray,0,(n-1));
    median(aray,n);
    return 0;
};
