/*This c program multiplies two variable values*/
#include<stdio.h>

float main(void)
{
 float num1, num2, result; /*Type declaration of variables*/
  
 printf("Enter first number to multiply: ");
 scanf("%f", &num1);
 
 printf("Enter second number to multiply: ");
 scanf("%f", &num2);

 result=num1*num2;

 printf("The multiplication result is %f \n", result);

 return 0;
}


