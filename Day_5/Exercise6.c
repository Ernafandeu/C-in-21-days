/*  Rewrite Listing 5.4 so that it needs only one return statement in the larger_of() function */


 #include <stdio.h>

 int x, y, z;

 int larger_of( int a, int b);

int main()
 {
 printf("\nEnter two different integer values");
 printf("\nEnter the first value  ");
 scanf("%d", &x);
printf("\nEnter the second value  ");
 scanf("%d",&y);

 z = larger_of(x,y);
 
 printf("\nThe larger value is %d.", z);

 return 0;
 }

 int larger_of( int a, int b)
 {
    if (a > b)
 return a;
 else
 return b;
 }
