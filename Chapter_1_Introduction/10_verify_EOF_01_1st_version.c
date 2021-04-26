# include<stdio.h> 
# include<stdlib.h> 
 
/* program to find the value of getchar()!=EOF */ 
 
int main() 
{ 
  int c; 
  c=getchar()!=EOF; 
  printf("%d\n",c); 
} 
