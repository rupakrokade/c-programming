/*This program demostrates if-else logic*/

#include<stdio.h>

main(void)
{
 int number, test;

 printf("Enter a number: ");
 scanf("%d", &number);

test = number % 2;
printf("test = %d\n", test);

 if (test == 0 && number >= 10)
 printf("The number you entered is \"even\" and greater than 9\n");

 if (test == 0 && number <= 10)
 printf("The number you entered is \"even\" and less than 11\n");


 if (test != 0 && number >= 10)
 printf("The number you entered is \" odd\"and greater than 9\n");

  if (test != 0 && number <= 10)
 printf("The number you entered is \"odd\" and less than 11\n");
}

