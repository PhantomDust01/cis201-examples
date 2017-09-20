/*
 * FIle name: main.cpp
 * Developer: Jeremy Vigil
 * Email: 
 * Description: This is a program to find the area and circumference of a circle
 *  as well as the volume and surface area of a sphere.
 */

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  
  //this is code that sets how many decimal spaces will show.
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(7);

  //since pi is a never ends, I only input the numbers of digits of pi appropriate for calcualtion.
  //note: I rounded the last digit up. 
  double pi = 3.14159265359;
  cout << "To find the area and circumference of a circle, \n"
          " as well as the volume and surface area of a sphere, input the radius." << endl;
  cout << "radius:";
  double radius;
  cin >> radius;
  
  //this is the formula for the area of a circle. 
  double area = pi * pow(radius , 2);
  cout << "the area of the circle is:" << area  << endl;

  // this is the formula for the circumference of a cirlce. 
  double circumference = 2 * pi * radius;
  cout << "the circumfrence of the circle is:" << circumference  << endl;
 
  //this is the formula for to find the volume of a sphere. 
  double volume = 4.0/3.0 * pi * pow(radius , 3);
  cout << "the volume of the sphere is:" << volume << endl;
  
  //this is the formula to find the surface area of a sphere.
  double SURFACE_AREA = 4 * pi * pow(radius , 2);
  cout << "the surface area  of the sphere is:" << SURFACE_AREA << endl;
  
  return 0;
 
}
