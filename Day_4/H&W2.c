/* Ecrivez un programme c pour trouver la somme de n nombres.

NB : Votre programme doit utiliser l'opérateur d'incrémentation. */

#include <stdio.h>
int i, somme ;
int main()
{
    for(i<1000; i++)
   printf("\n Entrez une valeur ");
   scanf("%d", &i);
   
    somme = i++;
    printf ("\n Somme a pour valeur : %d", somme);
    
    return 0;
   
}