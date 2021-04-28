/* Count blanks, tabs, and newlines */

#include <stdio.h>

main()
{
	int c, blanks, tabs, newlines;
	
	blanks = tabs = newlines = 0;
	
	while ( (c = getchar()) != EOF){
		
		if (c == ' ')
			++blanks;
		if (c == '\t')
			++tabs;
		if (c == '\n')
			++newlines;
	}
	printf("%d blanks, %d tabs, %d newlines\n", blanks, tabs, newlines);
}
