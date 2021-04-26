#include <stdio.h>

/* pseudocode:
 *
 * read a character
 * while (character is not end-of-file indicator)
 *    output the character just read
 *    read a character
 */
main()
{
	int c;
	
	c = getchar();
	while(c != EOF) {
		putchar(c);
		c = getchar();
	}
}
