#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
        c = getchar();
    }

    printf("%d - %d - %c", (getchar() != EOF),c ,c);

    return 0;
}
