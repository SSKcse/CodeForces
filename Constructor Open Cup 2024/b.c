#include <stdio.h>
#include <stdlib.h>

int *solve(int n, int m, int b[], int b_size)
{
    int *d = (int *)malloc((n - m) * sizeof(int)); // Allocate memory for result array
    int d_index = 0;                               // Index for result array
    int current_b = 0;                             // Index for b array
    int seen [n + 1] = {0};                         // Array to track seen elements

    // Iterate through elements of b
    for (int i = 1; i <= n; i++)
    {
        // Find next element in b that appears in a and hasn't been seen before
        while (current_b < b_size && b[current_b] != i)
        {
            current_b++;
        }

        // Add corresponding index to d only if element found, i is still less than or equal to the last element in a, and haven't seen it before
        if (current_b < b_size && i <= b[b_size - 1] && !seen[i])
        {
            d[d_index++] = i;
            seen[i] = 1; // Mark element as seen
        }
    }

    return d;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        int b[m];
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &b[j]);
        }

        int *d = solve(n, m, b, m);

        for (int j = 0; j < n - m; j++)
        {
            printf("%d ", d[j]);
        }
        printf("\n");

        free(d);
    }

    return 0;
}
