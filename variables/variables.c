/* This file shows you the basic of variables
 * By: Zero
 * https://www.cognitio.tech
 * Thu Oct 27 12:03:43 2016 */

#include <stdio.h>

int main(void) { 

	/* At begin */
	int number = 5; // assign 5 to VARIABLE number	( 5 in the number's box )
	char character = 'a'; // assign a to VARIABLE character	( a in the character's box )
	float floatNumber = 3.14; // same above ( 3.14 in the floatNumber's box ) 

	printf("At begin\n");
	printf("number holds value of %d\n", number);
	printf("character holds char %c\n", character);
	printf("floatNumber holds value of %f\n\n", floatNumber);

	/* We change those variables in here */
	number = 7; // assign 7 to VARIABLE number ( erase 5 then add 7 in the number's box )
	character = 'z'; // same above ( ...z in the character's box )
	floatNumber = 3.14159; // same above ( ...3.14159 in the floatNumber's box )
	
	printf("After changed \n");
	printf("number holds value of %d\n", number);
	printf("character holds char %c\n", character);
	printf("floatNumber holds value of %f\n\n", floatNumber);

	return 0; 
}

