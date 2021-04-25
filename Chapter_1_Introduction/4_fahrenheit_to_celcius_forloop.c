#include <stdio.h>

/* print Fahrenheit to Celsius table  using the for statement loop*/

main()

{
	int fahrenheit;
	
	printf("Fahrenheit\tCelsius\n");
	for (fahrenheit = 0; fahrenheit <= 300; fahrenheit = fahrenheit + 20)
	printf("%4d \t\t%6.1f\n", fahrenheit, (5.0/9.0)*(fahrenheit-32) );
}
