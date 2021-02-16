#include <iostream>
using namespace std;

int main()
{
  double pi = 3.14159;
  double radius = 5.4;
  double circumference; // definition of circumference
  double area; // definition of area
  double diameter; // definition of diameter


  circumference = 2 * pi * radius; // computes circumference
  area = pi * radius * 5.4; // computes area
  diameter = 2 * radius; // computes diameter

  cout << "The circumference of the circle is " << circumference << endl;
  cout << "The area of the circle is " << area << endl;
  cout << "The diameter of the circle is " << diameter << endl;
  
  
}