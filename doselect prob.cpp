#include<stdlib.h>
#include <iostream>
using namespace std;
int main(){
  int n,k,i,p=0;
  cin>>n;
  int d[n],t[n];
  for(i=0;i<n;i++){
    cin>>t[i]>>d[i];
  }
  for(i=0;i<100;i++){
        if(p>=0){
            if(i==t[k]){
            p=p-d[k];
            k++;
            }
        }else{
            cout<<k;
            break;
        }
        p++;
    }
  return 0;
}
