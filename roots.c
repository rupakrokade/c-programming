/* This program takes real coefficients of a quadratic equation and computes its roots*/

#include<stdio.h>
#include<math.h>

main(void)
{
 float a, b, c, root1, root2;

 printf("Enter quadratic equation coefficients a, b and c :");
 scanf("%f %f %f", &a, &b, &c);

 if ((b*b - 4*a*c)<0)
 {
  printf("Roots are imaginary\n");
 }
 else
 
 printf("%f %f \n", -b + (sqrt(b*b - 4*a*c)) / 2*a, -b - (sqrt(b*b - 4*a*c)) / 2*a);
}
