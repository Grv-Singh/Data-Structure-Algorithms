1<=n<=1000
1<=m<=n(n-1)/2
0<=a<n
0<=b<n
1<=q<=10
1<=r<n

#include<iostream>
using namespace std;

int n,m,i,j,a,b,q,u,k,r,z,e,w;

int main(){
  cin>>n>>m;
  int grid[n][n];
  for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        grid[i][j]=0;
      }
  }
  for(i=0;i<m;i++){
    cin>>a>>b;
    if(0<=a<n && 0<=b<n){
      grid[a][b]=grid[b][a]=1;
    }
  }
  cin>>q;
  int arr[q];
  for(i=0;i<q;i++){
    cin>>arr[i];
  }
  for(i=0;i<q;i++){
    u=(n-1);
    k=-1;
    r=arr[i];
    z=0;
    while(1){
        if(r==0 || z>(n*(n-1))/2){
          break;
        }
        if(u<0){
            u=(n-1);
        }
        if(grid[r][u]==1){
            k++;
            grid[r][u]=grid[u][r]=2;
            r=u;
        }
        u--;
        z++;
    }
    if(r==0){
      cout<<(k+1)<<"\n";
    }else{
      cout<<"-1\n";
    }
    for(e=0;e<n;e++){
      for(w=0;w<n;w++){
          if(grid[e][w]==2){
              grid[e][w]=1;
          }
      }
    }
  }
  return 0;
}
