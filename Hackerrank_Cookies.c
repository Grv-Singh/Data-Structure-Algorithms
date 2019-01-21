#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int n,k;
    scanf("%lld %lld",n,k);
    long long int aray[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%lld ",&aray[i]);
    }
    check(aray,n);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

void check(long long int aray[], long long int n){
    int i;
    for(i=0;i<n;i++){
     if(aray[i]<7){
        make_sweet(aray);
            }
    }
}

void make_sweet(long long int aray[]){
    int least, sleast, i, n=(sizeof(aray)/sizeof(aray[0])), min=aray[0];
    long long int naray[n];
    int smin=naray[0];
    for(i=0;i<n;i++){
     if(aray[i]<min){
        min=aray[i];
            }
    }
    least=min;
    for(i=0;i<n;i++){
        naray[i]=aray[i];
     if(naray[i]==min){
        naray[i]='\0';
            }
    }
    for(i=0;i<n;i++){
     if(naray[i]<smin){
        smin=aray[i];
            }
    }
    sleast=smin;
    for(i=0;i<n;i++){
     aray[i]=(least+(2*sleast));
    }
}
