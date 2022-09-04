/* BUG BUSTER: What's wrong with the following listing? */
#include <stdio.h>
void print_msg( void );
main()
{
 print_msg("This is a message to print" ); /* l'eereur est print_msg*/
 return 0;
}
void print_msg( void )
{
 puts( "This is a message to print" );
 return 0;
}