/* Écrivez un programme c qui utilise la formule quadratique pour trouver les racines d'une équation quadratique.

Étapes

1) Ecrivez la formule quadratique sur un papier
2) Voyez comment elle peut être convertie en code c. 
3) Implémentez la solution complète pour imprimer les racines de n'importe quelle équation fournie. */

# include <stdio.h>
# include <math.h>
float delta,a , b , c , x , x1 , x2 ;
int main()
{
    printf("\n Entrez la valeur de a: ");
    scanf("%d", &a);
    printf("\n Entrez la valeur de b: ");
    scanf("%d", &b);
    printf("\n Entrez la valeur de c: ");
    scanf("%d", &c);

delta = (b*b) - (4 * a * c) ;

if ( delta == 0)
 {
    x = (-b) / (2 * a) ; 
    printf("\n L'unique solution de cette équation est x = %d", x);
 }
else ( delta < 0)
    printf("\n Cette équation n'a pas de solution réelle");

if ( delta > 0)
{
    x1 = (- b - (sqrt (delta))) / (2 * a);
    x2 = (- b + (sqrt (delta))) / (2 * a);
    printf("\n Cette équation possède 2 solutions réelles");
    printf("\n La première solution de cette équation est x1 = %d" , x1);
    printf("\n La seconde solution de cette équation est x2 = %d" , x2);
}

    return 0 ;
}