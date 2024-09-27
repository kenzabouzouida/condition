#include <stdio.h>
  #include <math.h>
  int main() 
  
  { 
      float a ,b, c, delta, x, x1, x2 ;
    
      printf("Entrez les valeurs de a,b,c :\n ");
      scanf(" %f, %f ,%f ", &a,&b,&c);
      delta= pow(b,2) - (4* a* c);
    
      if (delta<0)
       printf("l'equation n'est pas de solution.");
       else if (delta == 0) 
        x1 = -b / (2 * a);
      
      else  {
          x1= (-b - sqrt (delta))/2*a ;
          x2= (-b + sqrt (delta))/2*a ;
          printf("les  solutions de l'equation est : %2f ,%2f",x1,x2);
       }

    return 0;
}