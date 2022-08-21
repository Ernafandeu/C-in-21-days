#include <stdio.h>

 int x,y;
int main()
 {
       for ( x = 0; x < 10; x++, printf( "\n" ) )
           for ( y = 0; y < 10; y++ ) 
            printf( "%i", y);
        for ( x = 0; x < 10; x++, printf( "\n" ) )
           for ( y = 0; y < 10; y++ ) 
            printf( "Y" );
           
       
 return 0;
 }