#include<stdio.h>
#include<string.h>

void main(){
char S[20];
scanf("%s",&S);
int i,a=0,m=0;

for(i=0;S[i]!='\0';i++){
a++;
}

int q;
if((a%3)==0){
q=(a/3);
}else{
    q=(a/3)+1;
}

char matrix[q][3];

int r,c;
for(r=0;r<=(q-1);r++){
for(c=0;c<=2;c++){
    if(matrix[r][c]==' '){
        continue;
    }else{
matrix[r][c]=S[m];
m++;
    }
}
}

char Tmatrix[3][q];

for(r=0;r<=2;r++){
for(c=0;c<=(q-1);c++){
Tmatrix[r][c]=matrix[c][r];
}
}
int j,n=0;
char newS[20];

for(r=0;r<=(q-1);r++){
for(c=0;c<=2;c++){
newS[n]=Tmatrix[r][c];
n++;
}
}

printf("%s",newS);

}
