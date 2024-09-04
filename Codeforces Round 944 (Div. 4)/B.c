#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char orig[11];
        scanf("%s", orig);

        char str[11];
        scanf("%s", str);

        if (canRearrange(str, orig))
        {
            printf("YES\n%s\n", str);
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}