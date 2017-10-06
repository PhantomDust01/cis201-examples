/* Filename: example.cpp
 * Developer: CIS201 class example
 * Email: 
 * Description: This is a program to find the interest value and add it to the principal using created functions and 
 *  and optimising the code in the main function.
 */

#include<iostream>
#include<string>
#include<cmath>

using namespace std;

double future_value(double principal, double p, int term) //variables dont matter here. it folllows order.
{
  double value = principal * pow(1 + p/100, term): //this is the formula for simple intrest.
  return value;
}

double prompt_double(string prompt_string) //this is the created function for stringing the value for double value.
{
  cout << prompt_string;
  double value;
  cin >> value;
  
  return value;
}

int prompt_int(string prompt_string) //this is a function for string the value for a int value.
{
  cout << prompt_string;
  int value;
  cin >> value;
  return value;
}

int main()
{
  double principal = prompt_double(string("Enter the principal: ")): //this calls the fuction "prompt double, and string.
  double rate = prompt_double(string("Enter the rate: "));
  double term = prompt_int(string("Enter the term: "));
  
  cout << "The future value is: " << future_value(principal, rate, term) << endl; // this calls the fuction 
                                                                                   //with inputted values 
  
  return 0;
}
