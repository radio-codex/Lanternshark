#include <stdio.h>
#include <math.h>

double hex(double num){
    double result=num*num*num;
    return result;
}
int main(){

 double a=0;
 double b=0;

 printf("Enter first number: ");
 scanf("%lf",&a);
 printf("Enter second number: ");
 scanf("%lf",&b);
 

 double c=hex(a);
double d=hex(b);

printf("Cube for a and b is %lf and %lf respectively\n",c,d);


    return 0;
}