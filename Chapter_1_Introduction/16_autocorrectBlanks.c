/* Program to copy its input to its output, replacing
 * each string of one or more blanks by a single blank.
 */
 
#include <stdio.h>

main()
{
	int character;
	while ( (character = getchar()) != EOF) {
		putchar(character);
		
		if (character == ' ') {
			while ( (character = getchar()) == ' ')
				;
			putchar(character);
		}
	}
}


