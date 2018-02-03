#include <stdio.h>

int main () {
 int intA, intB, intR;
 float floatA, floatB, floatR;
 
 intA = 64;
 intB = 10;
 floatA = 64;
 floatB = 10;
 
 //Somma
 intR = intA + intB;
 printf("A + B = %d\n", intR);
 floatR = floatA + floatB;
 printf("A + B = %.lf\n",floatR);
 
 //Sottrazione
 intR = intA - intB;
 printf("A - B = %d\n", intR);
 floatR = floatA - floatB;
 printf("A - B = %.lf\n", floatR);
 
 //Divisione interi e modulo
 intR = intA / intB;
 printf ("A / B = %d\t", intR);
 intR = intA % intB;
 printf ("Resto = %d\n", intR);
 
 //Divisione float
 floatR = floatA / floatB;
 printf ("A / B = %.lf\n", floatR);
 
 //Moltiplicazione
 intR = intA * intB;
 printf ("A * B = %d\n", intR);
 floatR = floatA * floatB;
 printf ("A * B = %.lf\n", floatR);
 
 return 0;
 
 }
