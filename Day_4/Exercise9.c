/*Write an if statement that determines whether someone is legally an adult (age 21), but not a senior
citizen (age 65) */
#include <stdio.h>
int age;
int main ()
{
    printf("\n Quel est votre age");
    scanf("%d, &age");
    if (age > 25 & age < 64)
        printf( "\n Tu es un adulte");
    else (age > 65) 
        printf( "\n Tu es un ainé");
    
    return 0;
}