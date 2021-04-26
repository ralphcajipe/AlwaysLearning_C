#include <stdio.h>

/* print Celsius to Fahrenheit table  using the for statement loop
 * in reverse order, that is, from 300 degrees to 0. 
 */

main()

{
	float celsius;
	
	printf("Celsius\t Fahrenheit\n");
	for (celsius = 300; celsius >= 0; celsius = celsius - 20)
	printf("%6.1f \t% 10.0f\n", celsius, (celsius * 9/5) + 32 );
}
