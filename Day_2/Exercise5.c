/* EX2-5.C */
 #include <stdio.h>
 #include <string.h>
 int main()
 {
 char buffer[256];

 printf( "Enter your name and press <Enter>:\n");
 gets( buffer );

 printf( "\nYour name has %d characters and spaces!",
 strlen( buffer ));
 return 0;
 }
 /* Ce programme compte le nombre de charactères ou lettres qu'il y'a dans un prénom*/