#include <stdio.h>

/* print Celsius to Fahrenheit table  using the for statement loop*/

main()

{
	float celsius;
	
	printf("Celsius\t Fahrenheit\n");
	for (celsius = 0; celsius <= 300; celsius = celsius + 20)
	printf("%6.1f \t% 10.0f\n", celsius, (celsius * 9/5) + 32 );
}
