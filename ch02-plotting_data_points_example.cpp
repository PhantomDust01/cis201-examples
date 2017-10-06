/*
 * File name: main.cpp
 * Developer: Jeremy Vigil
 * Email: 
 * Description: this is a program to create a bar chart and plot a data set in a different window.
 */

#include<iostream>
#include<string>
#include "ccc_win.h"

int ccc_win_main()
{ 
   //this is a program for plotting a data set and plot a data set.
   //this is the coords for the program.
   cwin.coord(0,5, 5000,0);
   
   // this is the code for the first box
   
   //this is the string used to  prompt the user for the name and measurment of the first bridge
   string bridge1 = cwin.get_string("enter the name of the first bridge:");
   int meas1 = cwin.get_int("enter the measurement in ft of the first bridge: "); 

   //these are locations of points for the first box that act as corners.
   Point bottom_left_box1(500, 3.75);
   Point top_left_box1(500, 4);
   Point bottom_right_box1(meas1, 3.75);
   Point top_right_box1(meas1, 4); 

   //this is the code for the border
   Line bottom(bottom_left_box1, bottom_right_box1);
   Line top(top_left_box1, top_right_box1);
   Line left(bottom_left_box1, top_left_box1);
   Line right(bottom_right_box1, top_right_box1);
   
   //this is used to display the points and borders of the first box.
   cwin << bottom << top << left << right; 
   Message mb1(top_left_box1, bridge1);
   cwin << mb1;
 
   //this is the code for second to top box.
   
   //this is the string used to prompt the user for the name and measurment of the second bridge. 
   string bridge2 = cwin.get_string("enter the name of the second bridge:");
   int meas2 = cwin.get_int("enter the measurement, in ft, of the second bridge: ");  

   //this is the location for the points "corners" of the second box
   Point bottom_left_box2(500, 3.25);
   Point top_left_box2(500, 3.50);
   Point bottom_right_box2(meas2, 3.25);
   Point top_right_box2(meas2, 3.50);

   //this is the code for the border
   Line bottom2(bottom_left_box2, bottom_right_box2);
   Line top2(top_left_box2, top_right_box2);
   Line left2(bottom_left_box2, top_left_box2);
   Line right2(bottom_right_box2, top_right_box2);

   //this code is used to desplay the points and borders of the second box.
   cwin << bottom2 << top2 << left2 << right2;
   Message mb2(top_left_box2, bridge2);
   cwin << mb2;

   //this is the code for the third box
   //this is the string used to prompt the user for the name and measurments of the third bridge.
   string bridge3 = cwin.get_string("enter the name of the third bridge: ");
   int meas3 = cwin.get_int("enter the measurment, in ft, of the third bridge: ");
  
   //location for the corners of the third box.
   Point bottom_left_box3(500, 2.75);
   Point top_left_box3(500, 3.00);
   Point bottom_right_box3(meas3, 2.75);
   Point top_right_box3(meas3, 3.00);

   //code for the borders of the third box
   Line bottom3(bottom_left_box3, bottom_right_box3);
   Line top3(top_left_box3, top_right_box3);
   Line left3(bottom_left_box3, top_left_box3);
   Line right3(bottom_right_box3, top_right_box3);

   //code to display the points and borders of the third box.
   cwin << bottom3 << top3 << left3 << right3;
   Message mb3(top_left_box3, bridge3);
   cwin << mb3;

   //this is the code for the last box.
   //this is the string used to prompt the user for the name and measurment of the final bridge. 
   string bridge4 = cwin.get_string("enter the name of the final box; ");
   int meas4 = cwin.get_int("enter the measurment, in ft, of the final bridge: ");

   //location for the corners of the last box
   Point bottom_left_box4(500, 2.25);
   Point top_left_box4(500, 2.50);
   Point bottom_right_box4(meas4, 2.25);
   Point top_right_box4(meas4, 2.50); 
    
   //code for the borders of the last box.
   Line bottom4(bottom_left_box4, bottom_right_box4);
   Line top4(top_left_box4, top_right_box4);
   Line left4(bottom_left_box4, top_left_box4);
   Line right4(bottom_right_box4, top_right_box4);

   //code to diplay the boards and corners of the last box.
   cwin << bottom4 << top4 << left4 << right4; 
   Message mb4(top_left_box4, bridge4);
   cwin << mb4;
   return 0;
}
