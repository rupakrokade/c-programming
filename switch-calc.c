/*This is a calculator program*/

#include<stdio.h>

main(void)
{
 int num1, num2;
 char operator;

 printf("Perform any + - / * operation: ");

 scanf("%d %c %d", &num1, &operator, &num2);

 switch(operator)
 {
  default:
   printf("Invalid operator\n");
   break;

  case '+':
   printf("Answer: %d\n", num1+num2);
   break;

  case '-':
   printf("Answer: %d\n", num1-num2);
   break;

  case '/':
   if (num2 == 0)
   {
   printf("Division by zero!!\n");
   }
   else
   printf("Answer: %d\n", num1/num2);
   break;

  case '*':
   printf("Answer: %d\n", num1*num2);
   break;
 }
}
