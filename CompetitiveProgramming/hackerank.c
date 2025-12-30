#include<stdio.h>

int aray[6],x1,x2,v1,v2,r=0;

int main(){
    aray[2]=aray[5]=0;
    printf("Enter the Values..\n");
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    if(x1>0 || x1<10000 || x1<x2 || x2>0 || x2<10000){
    aray[0]=x1;
    aray[1]=v1;
    aray[3]=x2;
    aray[4]=v2;
    if(check(aray[0],aray[1],aray[3],aray[4])==1){
        printf("YES");
    }else{
        printf("NO");
    }
    }else{
        printf("Wrong Entry! Reboot...");
        main();
    }
    return 1;
}

int check(int x1,int v1,int x2,int v2){
    if(x1<10000 && x2<10000){
        if(x1==x2 && aray[2]==aray[5]){
            return 1;
        }else{
        x1+=v1;
        aray[2]++;
        x2+=v2;
        aray[5]++;
        r=check(x1,v1,x2,v2);
        }
        }else{
            return 0;
        }
}
