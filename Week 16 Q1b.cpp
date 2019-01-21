#include<iostream> 
using namespace std; 
class Test 
{ 
public: 
Test(); 
}; 
Test::Test() { 
cout << "Constructor Called \n"; 
} 
void fun() { 
Test t1; 
} 
int main() { 
cout << "Before fun() called\n"; 
fun(); 
cout << "After fun() called\n"; 
return 0; 
} 

