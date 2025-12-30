#include<iostream>
using namespace std;

class String
{ 
public: 
int day; 
int month;
int year; 
public: 
Displaydate(int day = 1, int month = 1, int year = 2016); // Normal Constructor  
//Displaydate(const Displaydate &t); // Copy Constructor
}; 

/*Displaydate::Displaydate(int i, int j, int k){
	day=i;
	month=j;
	year=k;
}*/

void displaydate(int day, int month, int year) 
{ 
	cout<<"Date is "<<day<<"-"<<month<<"-"<<year<<endl;
}

void displaydatedifference(char **date1, char **date2) 
{ 
	int date1=(**date1[0]*10)+(**date1[1]);
	int date2=(**date2[0]*10)+(**date2[1]);
	cout<<"Date Difference is "<< (date1-date2) <<endl;
}

int main(){
	/*int x,y,z;
	cout<<"Day?";
	cin>>x;
	cout<<"Month?";
	cin>>y;
	cout<<"Year?";
	cin>>z;
	displaydate(x,y,z);
	*/
	cout<<"Date1?";
	cin>>x;
	cout<<"Date2?";
	cin>>y;
	displaydatediffrence(x,y);
}
