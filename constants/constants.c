/* This file shows you the basic of constants
 * By: Zero
 * https://www.cognitio.tech
 * Thu Oct 27 12:23:47 2016 */

#include <stdio.h>

int main(void) { 

	/* At begin */
	const int number = 5; // assign 5 to CONSTANT number	( 5 in the number's box )
	const char character = 'a'; // assign a to CONSTANT character	( a in the character's box )
	const float floatNumber = 3.14; // same above ( 3.14 in the floatNumber's box ) 

	printf("At begin\n");
	printf("CONSTANT number holds value of %d\n", number);
	printf("CONSTANT character holds char %c\n", character);
	printf("CONSTANT floatNumber holds value of %f\n\n", floatNumber);

	/* WE CAN NOT CHANGE THE VALUE OF CONSTANT */
	number = 7; 
	character = 'z'; 
	floatNumber = 3.14159; 
	
	return 0; 
}

