#include <stdio.h>

/* print Fahrenheit-Celcius table
	for fahrenheit = 0, 20, ..., 300 
	algorithm is C = (0°F - 32) × 5/9 */
	
main()
{
	float fahrenheit, celsius;
	int lowerLimitofTemperatureTable, upperLimitofTemperatureTable, stepSize;
	
	lowerLimitofTemperatureTable = 0;	
	upperLimitofTemperatureTable = 300;
	stepSize = 20;
	
	fahrenheit = lowerLimitofTemperatureTable;
	printf("Fahrenheit\tCelsius\n");
	while (fahrenheit <= upperLimitofTemperatureTable){
		celsius =  (fahrenheit-32) * (5.0/9.0);
		printf("%3.0f \t\t%6.1f\n", fahrenheit, celsius);
		fahrenheit = fahrenheit + stepSize;
	}
}
