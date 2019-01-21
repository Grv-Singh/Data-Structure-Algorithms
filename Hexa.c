#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,a=1,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    for(j=1;j<=(n-1);j++){
        printf(" ");
    }
    for(j=1;j<=n;j++){
    printf("%d",j);
    }
    printf("/n");
    }
}

