/*This c program multiplies two variable values*/
#include<stdio.h>
double multi(double a,double b)
{
 /*printf("%f\n", a);
 printf("%f\n", b);*/
 double ret;
 ret=a*b;
 return ret;
}

double main(double argv[])
{
 multi(argv[2],argv[3]);
}


