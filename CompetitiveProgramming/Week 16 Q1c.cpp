#include<iostream> 
using namespace std; 
class Test 
{ 
public: 
Test(); 
}; 
Test::Test() { 
cout << "Constructor Called \n";} 
void fun() { 
static Test t1; } 
int main() { 
cout << "Before fun() called\n"; 
fun(); 
cout << "After fun() called\n"; 
fun(); //will the constructor be called this time? 
return 0;} 

