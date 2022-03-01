#include <stdio.h>

int main()
{
    int c, sp, tabs, nl;

    sp = 0;
    tabs = 0;
    nl = 0;

    while((c = getchar()) != EOF)
    {
        if (c == ' ')
            sp++;
        else if (c == '\t')
            tabs++;
        else if (c == '\n')
            nl++;
    }
    printf("spaces = %d, tabs = %d and new lines = %d\n", sp, tabs, nl);

return 0;
}
