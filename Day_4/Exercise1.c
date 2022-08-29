#include <stdio.h>
int x,y;
int main()
{ 
    printf("\nEntrez deux nombres");
scanf("%d %d",&x,&y);
printf("\n\n%d est plus grand",(x>y)?x:y);
return 0;
}