#include<stdio.h>
#include<string.h>

void main(){
 int A[3][3]={1,2,3,4,5,6,7,8,9}, B[3][3]={9,8,7,6,5,4,3,2,1}, C[3][3]={0,0,0,0,0,0,0,0,0};
 int i=0,j=0,b;

 for(j=0;j<3;j++){
     b=0;
    for(i=0;i<3;i++){
        C[j][b] = C[j][b] + (A[i][b] * B[b][i]);
                    }
                    b++;
                }


 for(j=0;j<3;j++){
    for(i=0;i<3;i++){
        printf("%d ",C[i][j]);
                    }
                    printf("\n");
                 }

}
