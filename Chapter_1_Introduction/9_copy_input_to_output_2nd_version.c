#include <stdio.h>

main()
{
	int c;
	
	printf("Enter characters: \n");
	while( (c = getchar() ) != EOF) {
		putchar(c);
	}
}
