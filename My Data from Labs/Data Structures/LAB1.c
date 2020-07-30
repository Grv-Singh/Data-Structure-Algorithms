#include<conio.h>
#include<iostream>
using namespace std;

//
void main(){
//Implementing Linear Search
    int n;
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Which No. is to be searched?\n";
    cin>>n;
    linear_search(array,n);
}

void linear_search(int *a, int b)
    {
        bool flag=false;
        int i=0;
        while(a[i]!='\0'){
            if(a[i]==b){
                cout<<"b is found at i position\n"<<endl;
                flag = true;
            }
            i++;
        }
        if(flag==false){
            char r;
            cout<<"No such No. can be seen in the array!!\n"<<endl;
            cout<<"Retry? (y/n)\n"<<endl;
            cin>>r;
            if(r=='y'){
                main();
            }else{
                exit(0);
            }
        }
    }
