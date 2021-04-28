#include <stdio.h>

/* count lines in input*/
main()
{
	int count, newline;
	
	newline = 0;
	while ( (count = getchar()) != EOF)
		if (count == '\n')
			++newline;
	printf("%d\n", newline);
	
}
