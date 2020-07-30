#include<iostream>
using namespace std;
int x = 0;
int f()
{
return x;
}
int g()
{
int x = 1;
return f();
}
int main()
{
cout<<g();
cout<<"\n";
return 0;
}
