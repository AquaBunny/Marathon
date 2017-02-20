/**************************************************
Filename: marathon.c
Author: Daniel Bachler
Course: CS120
Assignment 1
Date Created: 9-8-2015
Brief Description: Prints out the lenght of a marathon in kilometers
***************************************************/

#include <stdio.h>

#define YARDS_PER_MILE 1760
#define KILOS_PER_YARD 0.0009144

 /* A marathon is 26 miles, 385 yards               */
 /* Prints the distance of a marathon in kilometers */
 int main(void)
 {
   int miles, yards;
   double kilometers;
  
   miles = 26;
   yards = 385;
   kilometers = (miles * YARDS_PER_MILE + yards) * KILOS_PER_YARD;
   printf("A marathon is %f kilometers\n", kilometers);
  
   return 0;
 }

