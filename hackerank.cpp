#include<stdio.h>
#include<stdlib.h>

void main(){
    int x1,v1,x2,v2;
    scanf("%d %d %d %d",x1,v1,x2,v2);
    check(x1,v1,x2,v2);
}

char[3] check(int x1,int v1,int x2,int v2){
    int a[2]={0,0};
    if(x1<0 || x1>10000 || x1>x2 || x2<0 || x2>10000){
        return "NO";
    }else{
        if(x1==x2 && a[0]=a[1]){
            return "YES";
        }
        x1 += v1;
        a[0]++;
        x2 += v2;
        a[1]++;
    }
}
