#include<iostream> 
using namespace std; 
class Point
{ 
private: 
int x; 
int y; 
public: 
Point(int i = 0, int j = 0); // Normal Constructor 
Point(const Point &t); // Copy Constructor 
}; 

Point::Point(int i, int j) 
{ 
x = i; 
y = j; 
cout << "Normal Cunstroctor called\n"; 
} 
Point::Point(const Point &t)
{ 
y = t.y; 
cout << "Copy constructor called\n"; 
} 
int main() 
{ 
Point *t1, *t2; 
t1 = new Point(10, 15); 
t2 = new Point(*t1); 
Point t3 = *t1; 
Point t4; 
t4 = t3;
return 0; 
} 

