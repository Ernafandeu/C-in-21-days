/*  Write a function that calls the functions in exercises 7 and 8. */

#include <stdio.h>
float divide (float a, float b);
float multiply(int x, int y);
float addition (float e, float f);
float z;

int main()
{
printf("Le resultat de cette operation est %f", z) ;
z = addition( divide(10,5) , multiply(2,3) ) ;
return 0 ;
}

float divide (float a, float b)
{
if (b == 0)
printf("L'operation ne peut pas être effectuer") ;
else 
return a/b ;
}

float multiply(int x, int y)
{
    return x * y;
}

float addition (float e, float f)
{
    return e + f;
}