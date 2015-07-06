/*This program calculates sum of 4 digit number*/

#include<stdio.h>

int main(void)
{
 int number, sum, d1, d2, d3, d4;
 
 printf("Enter a 4 digit number: ");
 
 scanf("%d", &number);
 
 d1 = number % 10;
 number /= 10;

 d2 = number % 10;
 number /= 10;

 d3 = number % 10;
 number /= 10;

 d4 = number;

 sum = d1+d2+d3+d4;

 printf("The \"sum\" of number enterd is = %d\n",sum);

}
