#include <stdio.h>

int main()
{
    int annee,m,j,h,M,s;
    printf("veuillez entrer l'annee:");
    scanf("%d",&annee);
   j = annee * 365;
   m = annee * 12; 
   h = j * 24;  
   M = h * 60;  
   s = m * 60;;
    printf("%dmois %djours %dheures %dminutes %dsecondes",m,j,h,M,s);

    return 0;
}