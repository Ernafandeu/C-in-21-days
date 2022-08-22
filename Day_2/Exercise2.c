/* EX2-2.C */
 #include <stdio.h>
 void display_line(void);
 main()
 {
 display_line();
 printf("\n Teach Yourself C In 21 Days!\n");
 display_line();

 return 0;
 }

 /* print asterisk line */
 void display_line(void)
 {
 int counter;

 for( counter = 0; counter < 21; counter++ )
 printf("*" );
 }
 /* end of program */

 /*a. What line(s) contain statements?
 line 7,10 , 19
b. What line(s) contain variable definitions?
line 16
c. What line(s) contain function prototypes?
line 6
d. What line(s) contain function definitions?

e. What line(s) contain comments?
line 1,13 , 21 */