#include<stdio.h>

char s[],a[];
int n,m,i,j,p=1,flag=0;

void main(){
    scanf("%d",n);
    gets(s);
    a[0]=s[0];
    for(i=0;i<n;i++){
        m=sizeof(a)/sizeof(a[0]);
        for(j=0;j<m;j++){
            if(s[i]==a[j]){
                flag++;
            }
        }
        if(flag==false){
            a[p]=s[i];
            p++;
        }
    }
}

