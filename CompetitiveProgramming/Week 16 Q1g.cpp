#include<iostream> 
using namespace std; 
/* Swaps strings by swapping pointers */ 
void swap1(char **str1_ptr, char **str2_ptr) 
{ 
char *temp = *str1_ptr; 
*str1_ptr = *str2_ptr; 
*str2_ptr = temp; 
} 

int main() 
{ 
char *str1 = "JIIT"; 
char *str2 = "NOIDA"; 
swap1(&str1, &str2); 
cout<<"str1 is "<<str1<<endl; 
cout<<"str2 is "<<str2<<endl; 
return 0; 
} 

