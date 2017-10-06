/* File name: main.cpp
 * Developer: Jeremy Vigil
 * Email: 
 * Description: This is a program to find the roman numeral that corresponds to
 *  the given inputed digit
 */
 
#include<iostream>
#include<string>

using namespace std;

int main()
{
  cout << "Please enter in a number between 3999 & 1: ";
  int number;
  cin >> number;
  string roman_numeral;
  
  //formuals for the roman numerals.
  int thousands = number / 1000;
  int hundreds = number /100 % 10;
  int tens = number /10 % 10;
  int ones = number % 10; 

  for(int i = 0; i < thousands; i++){
      roman_numeral += 'M'; //strings roman numerals for 1000+.
  }
  
  if(hundreds == 9){
    roman_numeral += "CM"; //strings roman numeral for 900.
  }
  else if(hundreds >= 5){
    roman_numeral += 'D'; //strings roman numeral for 500.
      
    for(int i = 0; i < hundreds -5; i++){
          roman_numeral += 'C'; //strings roman numerals for 600-800.
    }
  }  
  else if(hundreds == 4){
    roman_numeral += "CD"; //strings the roman numerals for 400.
  }
  else if(hundreds >= 1){
    for(int i = 0; i < hundreds ; i++){
      roman_numeral += 'C'; //strings roman numerals for 300-100.
    }
  }
    
 if(tens == 9){
    roman_numeral += "XC"; //strings roman numeral for 90.
  }
  else if(tens >= 5){
    roman_numeral += 'L'; //strings roman numeral for 50.
    for(int i = 0; i < tens - 5; i++){
      roman_numeral += 'X';//strings roman numerals for 60-80
    }
  }
  else if(tens == 4){
   roman_numeral += "XL";//strings roman numeral for 40.
  }
  else if(tens >= 1){
    for(int i = 0; i < tens; i++){
      roman_numeral += 'X'; //string roman numeral for 30-10.
    }
  }
  
  if(ones == 9){
    roman_numeral += "IX"; //strings roman numeral for 9.
  }
  else if(ones >= 5){
    roman_numeral += 'V'; //strings roman numeral for 5.
    for(int i = 0; i < ones - 5; i++){
        roman_numeral += 'I';//strings roman numerals for 8 - 6
    }
  }
  else if(ones == 4){
    roman_numeral += "IV"; //strings roman numeral for 4.
  }
  else if(ones >= 1){
    for(int i = 0; i < ones; i++){
      roman_numeral += 'I'; //strings roman numerals for 3 - 1.
    }
  }
  // this code diplays the roman numerals. 
  cout << "roman numeral: " << roman_numeral << endl; 
  
  return 0;
}
