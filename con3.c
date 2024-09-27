#include <stdio.h>

int main() {
    
    int a, b, c;

    
    printf("Entrez la première valeur: ");
    scanf("%d", &a);
    printf("Entrez la deuxième valeur: ");
    scanf("%d", &b);

    c = a + b;
    
    if (a == b) {
        
     c =c* 3;
    }

   
    printf("Le résultat est: %d\n", c);

    return 0;
}