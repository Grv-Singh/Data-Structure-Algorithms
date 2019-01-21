#include<conio.h>
#include<stdio.h>
#include<cstdlib>
#include<iostream>

using namespace std;

int aray[10]={1,2,3,4,5,6,7,8,9,10};

void linear_search(int a);
void bienary_search(int b);

int main(){
    int n;
    int w;
    char x;
    cout<<"Search or Sort?(S/T)\n";
    cin>>x;
    if(x=='S'){
        cout<<"Which No. is to be searched?\n"<<endl;
        cin>>n;
        cout<<"Which Way?\n1. Linear search\n2. Binary Search\n"<<endl;
        cin>>w;
        switch(w){
            case 1:
                linear_search(n);
                system("pause");
                break;
            case 2:
                bienary_search(n);
                system("pause");
                break;
        }
    }else{
        if(x=="T"){
            cout<<"Which Way?\n1. Bubble sort\n2. Insertion Sort\n3. Selection Sort\n"<<endl;
            cin>>w;
        switch(w){
            case 1:
                bubble_sort(n);
                system("pause");
                break;
            case 2:
                insertion_sort(n);
                system("pause");
                break;
            case 3:
                selection_sort(n);
                system("pause");
                break;
            }
        }else{
            cout<<"Wrong param check for S/T..\n";
            main();
        }
    }
}

void linear_search(int b)
    {
        bool flag=false;
        int i=0;
        while(aray[i]!='\0'){
            if(aray[i]==b){
                cout<<b<<"is found at "<<(i+1)<<"Position"<<endl;
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

void bienary_search(int b)
    {
        int r;
int initial = 0;
int final = sizeof(aray)/sizeof(aray[0]);
int mid;
int location = -(final+1);

while(initial<=final){

mid=(initial+final)/2;

if(array[mid]==b){
	location=mid;
	break;
	}
if(r<array[mid])
	final=mid-1;
if(r>array[mid])
	final=mid+1;
}
if(location==-11)
	cout<<"Required number not found"<<endl;
else
	cout<<"Required number is found at Index"<<location<<endl;
getch();
    }

void bubble_sort(int b)
    {
	int n,i,j,temp;
        for(i=1;i<n;i++){
		for(j=0;j<(n-1);++j){
			if(aray[j]>aray[j+1]){
				temp=aray[j];
				aray[j]=aray[j+1];
				aray[j+1]=temp;
					}				
				    }
				}
	cout<<"Array after Bubble Sort.."<<endl;
	for(i=0;i<n;i++){
		cout<<" "<a[i];
			}	
    }

void selection_sort(int size)
    {
        int min_ele_loc;

    }

void insertion_sort(int b)
    {
        bool flag=false;
        int i=0;
        while(aray[i]!='\0'){
            if(aray[i]==b){
                cout<<b<<"is found at "<<(i+1)<<"Position"<<endl;
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
