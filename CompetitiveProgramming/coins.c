#include<stdio.h>

main(){
    int p,r,fr,tr;
    float t;
    printf("Enter no. of 50paisa coins");
    scanf("%d",&p);
    printf("Enter no. of 1rupee coins");
    scanf("%d",&r);
    printf("Enter no. of 5Rupees coins");
    scanf("%d",&fr);
    printf("Enter no. of 10Rupees coins");
    scanf("%d",&tr);
    t=(0.5)*p+r+(5*fr)+(10*tr);
    printf("%f",t);
}
