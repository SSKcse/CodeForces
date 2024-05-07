#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool checkSubstringIt(const char *str)
{
    const char *result = strstr(str, "it");
    return result != NULL;
}

int main()
{
    int t;
    scanf("%d", &t);
    getchar();

    while (t--)
    {
        char str[101];
        fgets(str, sizeof(str), stdin);

        if (checkSubstringIt(str))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
