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
Test t1; 
int main() { 
cout << "main() started\n"; 
cout << "main() End\n"; 
return 0; 
}

