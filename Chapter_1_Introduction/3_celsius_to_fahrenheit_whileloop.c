#include <stdio.h>
/*	print Celsius to Fahrenheit table
**	for celsius = -17.8, -6.7, ..., 148.9;
**	algorithm is F = (0°C × 9/5) + 32 
*/
	
main()
{
	float fahrenheit, celsius;
	float lowerLimitofTemperatureTable, upperLimitofTemperatureTable, stepSize;
	
	lowerLimitofTemperatureTable = 0;	
	upperLimitofTemperatureTable = 100;
	stepSize = 5;
	
	celsius = lowerLimitofTemperatureTable;
	printf(" Celsius to Fahrenheit\n");
	printf(" ---------------------\n");
	while (celsius <= upperLimitofTemperatureTable){
		fahrenheit =  (celsius * 9/5) + 32;
		printf("%6.1f \t\t%5.0f\n", celsius, fahrenheit);
		celsius = celsius + stepSize;
	}
}
