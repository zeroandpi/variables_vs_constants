/* This file shows you the basic of constants
 * By: Zero
 * https://www.cognitio.tech
 * Thu Oct 27 12:23:47 2016 */

#include <stdio.h>

int main(void) { 

	/* At begin */
	const int NUMBER = 5; // assign 5 to CONSTANT NUMBER	( 5 in the NUMBER's box )
	const char CHARACTER = 'a'; // assign a to CONSTANT CHARACTER	( a in the CHARACTER's box )
	const float FLOAT_NUMBER = 3.14; // same above ( 3.14 in the FLOAT_NUMBER's box ) 

	printf("At begin\n");
	printf("CONSTANT NUMBER holds value of %d\n", NUMBER);
	printf("CONSTANT CHARACTER holds char %c\n", CHARACTER);
	printf("CONSTANT FLOAT_NUMBER holds value of %f\n\n", FLOAT_NUMBER);

	/* WE CAN NOT CHANGE THE VALUE OF CONSTANT */
	NUMBER = 7; 
	CHARACTER = 'z'; 
	FLOAT_NUMBER = 3.14159; 
	return 0; 
}

