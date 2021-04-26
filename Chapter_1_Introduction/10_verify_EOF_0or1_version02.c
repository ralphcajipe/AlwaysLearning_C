# include <stdio.h> 
# include <stdlib.h> 
 
/* version 2: program to find the value of getchar() != EOF */ 
 
int main() 
{ 
  int c; 
  char result;
  result = getchar() != EOF; 
  printf("%d\n", result); 
} 
