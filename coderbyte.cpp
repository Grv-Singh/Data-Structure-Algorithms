#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int FirstFactorial(int num) {

  // code goes here
  int i = num;
  while(i>1){
      num=num*(--i);
  }
  return num;

}

int main() {

  // keep this function call here
  int x;
  cin >> x;
  cout << FirstFactorial(x);
  return 0;

}
