#include <stdio.h>

int min_cuts(char *str, int n)
{
    int count0 = 0, count1 = 0, i;

    // Count the number of 0s and 1s in the string
    for (i = 0; i < n; i++)
    {
        if (str[i] == '0')
            count0++;
        else
            count1++;
    }

    // If the number of 0s and 1s are not equal, then it is not possible to form a sorted string
    if (count0 != count1)
        return -1;

    int iters = 0;
    count0 = count1 = 0;

    // Traverse the string. Increase the count of 0s and 1s encountered so far.
    // If at any point, the count of 0s becomes greater than the count of 1s, then an extra cut is required.
    for (i = 0; i < n; i++)
    {
        if (str[i] == '0')
            count0++;
        else
            count1++;

        if (count0 > count1)
            iters++;
    }

    return iters;
}

int main()
{
    int t,n;
    char str[501];

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n); // Assuming 'n' represents the length of the binary string

        scanf("%s", str);

        int cuts = min_cuts(str, n);

        if (cuts == -1)
            printf("-1\n");
        else
            printf("%d\n", cuts);
    }

    return 0;
}
