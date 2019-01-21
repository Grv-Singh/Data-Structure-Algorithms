#include<iostream>
using namespace std;
int main()
{
char arr[] = {1, 2, 3};
char *p = arr;
cout<<sizeof(p);
cout<<" "<<sizeof(arr);
return 0;
}
