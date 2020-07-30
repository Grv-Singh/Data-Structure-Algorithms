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

int checker(char a[10][20], int i){
int j,u=0,v;
char k[20];

printf("Input Word %d..\n",(i+1));
                scanf("%s",k);
        for(j=0;j<i;j++){
                            v = strcmp(a[j],a[j+1]);
                           if(v>0){ u++; }
                        }

if(u>0){
                printf("\nInvalid Input.. Non Lexicographic.. %d Words greater found.. Retype\n",u);
                input(a[i],i);

       }else{
                printf("Input Ok!\n");
                a[i]=k;
            }
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

 int binary_search(char a[10][20], char X[], int Min, int Max){

Max=a[10][1];
if(Max<Min){
 return 0;
}
else{
        int Mid = mid(Min,Max);

        if(a[Mid]>X){
            return binary_search(a,X,Min,(Mid-1));
                    }
                    else{

                    if(a[Mid]<X){
            return binary_search(a,X,(Mid+1),Max);
                    }
                    else{
                            return Mid;
                        }

                        }
    }

}


