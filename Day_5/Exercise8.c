/* Write a function that receives two numbers as arguments. The function should divide the first
number by the second. Don't divide by the second number if it's zero. (Hint: Use an if statement.) */

#include <stdio.h>
float divide (int a, int b);
int x, y ;
int main()
{
printf("Enter two different integer values: ");
 scanf("%d%d", &x, &y);
 printf("Le resultat de cette operation est %f", divide(x,y));
 return 0;
}

float divide (int a, int b)
{
if (b == 0)
printf("L'operation ne peut pas être effectuer");
else 
return a/b;
}