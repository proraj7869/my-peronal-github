#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the number of a :-  ");
    scanf("%d", &a);
    printf("Enter the number of b :-  ");
    scanf("%d", &b);

    if (a <= b)
    {
        printf("a is MIN");
    }
    else
    {
        printf("b is MIN");
    }

    return 0;
}