#include<stdio.h>
#include<string.h>

main(){

char a[10][20], i, k;
char S[20];

for(i=0;i<=9;i++){
        input(a[i],i);
                 }

printf("\nInput Word to search..\n");
scanf("%s",S);

int result = word_search(a,S);

if(result>0){
    printf("\nWord %s is Found at %d", S, result);
             }else{
                    printf("\nWord not Found");
                  }
      }

int input(char a[10][20], int i){

printf("Input Word %d..\n",(i+1));
                scanf("%s",a[i]);
                printf("Input Ok!\n");
                                }

int word_search(char a[10][20], char X[]){
    int i,v;
    for(i=0;i<10;i++){

        v = strcmp(a[i],X);

    if(v==0){
        return (i-1);
        break;
    }else{
        continue;
    }

    }
                                 }


