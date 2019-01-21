#include<stdlib.h>
#include<conio.h>
using namespace std;

int main(){

//KMP Algorithm, String matching
int n,m,i=0;

cout<<"Input size of U(String), Size of V(String)";
cin>>n>>" ">>m;

char U[n],V[m],a='A',b='2';

// * can be any alphanumeric leaving 1 and 0
// A-Z 65-90
// a-z 97-122

cout<<"Input U"<<endl;

while(i<n){
    cin>>U[i];
    i++;
}

i=0;

cout<<"Input V"<<endl;

while(i<m){
    cin>>V[i];
    i++;
}

//KMP Algorithm, String matching
int n1,m1,i1;

cout<<"Input size of S(String), Size of T(Pattern)";
cin>>n1>>" ">>m1;

char S[n],T[m];

while(i<n){
    cin>>S[i];
    i++;
}

i=0;

while(i<m){
    cin>>T[i];
    i++;
}


return 0;
}
