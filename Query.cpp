#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main(){

int j=0,n,m,d,k,count=0,ans=0;
cin>>m>>" ">>n;
char str[n][8],s[8];
for(j=0;j<n;j++){
    cin>>str[j];
}
for(j=0;j<m;j++){
    cin>>s>>" ">>d;
}
for(j=0;j<n;j++){
    for(k=0;k<8;k++){
        if(str[j][k]!=s[k]){
            count++;
        }
    }
    if(count==d){
            ans++;
    }
}

return 0;
}
