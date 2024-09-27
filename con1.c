#include <stdio.h>


int main() 
{
  int n1;
  
  printf("Entrer un nombre:");
  scanf("%d",&n1);
  
  if (n1 % 2 == 0) 
    printf("Nombre pair");
  else
    printf("Nombre impair");
  return 0; 
}