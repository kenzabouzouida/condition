#include <stdio.h>
  int main() {
    char c;
    
    printf("Entrez un caractère : ");
    scanf(" %c", &c);

    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'Y':
            printf("%c est une voyelle.\n", c);
            break;
        default:
            printf("%c est une consonne..\n", c);
    }

    return 0;
}