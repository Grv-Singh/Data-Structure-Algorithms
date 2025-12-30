#include<iostream> 
using namespace std; 
class Test 
{ 
public: 
Test(); 
}; 
Test::Test() { 
cout<<"Constructor Called \n"; 
} 
int main() 
{ 
cout<<"Start \n"; 
Test t1(); 
cout<<"End \n"; 
return 0; 
} 

