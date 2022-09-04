/* Write a program that uses a function to find the average of five type float values entered by the
user. */
#include <stdio.h> 
float average (float a);
float c, d, e, f, g, i;
int somme;
int main()
{
    printf("\n Veuillez entrez vos 5 notes");
    printf("\n Premiere note :" );
    scanf("%f", &c);
     printf("\n Deuxieme note :" );
    scanf("%f", &d);
     printf("\n Troisieme note :" );
    scanf("%f", &e);
     printf("\n Quatrieme note :" );
    scanf("%f", &f);
     printf("\n Derniere note :" );
    scanf("%f", &g);

somme = c + d + e + f + g ; 
i = average(somme);
/*printf("\nla valeur de %f", &i);*/
printf("\nla valeur de %d",&somme);
/*printf ("La moyenne de vos notes est egale a : %f", &i);*/
return 0 ;
}

float average (float a)
{
    return somme / 5 ;
}
