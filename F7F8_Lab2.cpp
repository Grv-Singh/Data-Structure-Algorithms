#include<stdlib.h>
#include<iostream>
using namespace std;

int main(){

//KMP Algorithm, String matching
int n=0,m=0,i=0,j=0,arr[100],g=0,k=0,c=0;

cout<<"Input size of S(String), Size of T(Pattern)"<<endl;
cin>>n;
cin>>m;

char S[n],T[m];

while(i<n){
    cin>>S[i];
    i++;
}

cout<<"Done, Input T"<<endl;
i=0;

while(i<m){
    cin>>T[i];
    i++;
}

i=0;

for(i=0;i<n;i++){
    if(S[i]==T[0]){
        for(j=0;j<m;j++){
            if(S[i+j]==T[j]){
                c++;
            }
        }
        if(c==m){
            g++;
            arr[k]=i;
            k++;
        }
    }
}

i=0;

cout<<g<<" matches found at indices ";
while(arr[i]!='\n'){
    cout<<arr[i]<<" ";
    i++;
}

return 0;
}
