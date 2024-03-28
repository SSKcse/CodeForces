#include <stdio.h>

int max_a1(int n, int *arr)
{
    int max_val = arr[0];
    int odd_sum = 0, even_sum = 0;

    // Calculate the sum of elements at odd and even indices
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
            even_sum += arr[i];
        else
            odd_sum += arr[i];
    }

    // Choose the maximum between the initial value and the sum of odd indices
    if (odd_sum > max_val)
        max_val = odd_sum;

    // Return the maximum value of a1
    return max_val;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];

        // Input array elements
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        // Calculate and print the maximum possible value of a1
        printf("%d\n", max_a1(n, arr));
    }

    return 0;
}
