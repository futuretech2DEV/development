#include <stdio.h>

int main()
{
int c, oc;

oc = 0;

while ((c = getchar()) != EOF)
{

//printf("\noc = %c:[%d] - c = %c:[%d]\n", oc, oc, c, c);

    if (oc == ' ' && c == ' ')
        ;
    else
        putchar(c);

    oc = c;
}
return 0;
}
