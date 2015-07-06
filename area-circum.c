/*This program calculates area and circumference of a circle given its radius*/

#include<stdio.h>
#define pi 3.14 /*Defining the constant variable pi*/

float main(void)
{
 float radius, area, circum;

 printf("Enter the value of radius: ");
 scanf("%f", &radius);
 
 printf(" Area = %f\n Circumference = %f\n", pi*radius*radius, 2*pi*radius);
}
