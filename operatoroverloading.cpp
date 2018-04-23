#include <iostream>
using namespace std;

class Point {
  int x, y;
public:
  Point() {} //prajjwal will add here

  void show() {
    cout << x << " ";
    cout << y << "\n";
  }

  friend Point operator+(Point op1, Point op2); // now a friend
  Point operator-(Point op2);
  Point operator=(Point op2);
  Point operator++();
};

// Nishkarsh will addd here
Point operator+(Point op1, Point op2)
{

}
 
// Overload - for Point.
Point Point::operator-(Point op2)
{
  Point temp;
 
  // notice order of operands
  temp.x = x - op2.x;
  temp.y = y - op2.y;
 
  return temp;
}
 
// Prakhar added here
x=op2.x;
y=op2.y;
return *this;
Point Point::operator=(Point op2)
{

}
 
// Overload ++ for Point.
Point Point::operator++()
{
  x++;
  y++;
 
  return *this;
}
 
int main()
{
  Point ob1(10, 20), ob2( 5, 30);
 
  ob1 = ob1 + ob2;
  ob1.show();
 
  return 0;
}
