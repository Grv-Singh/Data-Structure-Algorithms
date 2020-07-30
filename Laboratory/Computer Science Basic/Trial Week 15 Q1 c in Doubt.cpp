#include<iostream>
using namespace std;
int fun()
{
static int num = 40;
return num--;
}
int main()
{
for(fun(); fun(); fun())
{
cout<<fun()<<" ";
}
return 0;
}
