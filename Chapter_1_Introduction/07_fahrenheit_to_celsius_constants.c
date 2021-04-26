#include <stdio.h>
/* symbolic constants */
#define LOWER 0     /* lower limit of table */
#define UPPER 300   /* upper limit of table */
#define STEP 20     /* step size */

/* print Fahrenheit to Celsius table using for loop through symbolic constants */

main()
{
  int fahrenheit;
  
  printf("Fahrenheit\tCelsius\n");
  for(fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit = fahrenheit + STEP)
  	printf("%5d %15.1f\n", fahrenheit, (5.0/9.0) * (fahrenheit-32) );
}
