#include <stdio.h>
 
int main()
{
    int a;
 
    printf("Enter the number a: ");
    scanf("%d", &a);
 
    if (a > 0)
        printf("%d est positive.", a);
    else if (a< 0)
        printf("%d est negative.", a);
    else if (a== 0)
        printf("%d est nulle.", a);
 
    return 0;
}