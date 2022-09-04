/* Write a function that receives two numbers as arguments and returns the value of their product. */

#include <stdio.h>
float multiply(float a, float b);
float x;
int main()
{
    printf("\n The answer of your operation is %f",x);
    x = multiply (3.0,4.0);
    return 0;
}

float multiply(float a, float b)
{
    return a * b;
}