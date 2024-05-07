#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int t, a;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &a);
        int y = 0;
        int maxVal = 0;

        for (int x = 1; x < a; x++)
        {
            int gcVal = gcd(a, x);
            int currVal = gcVal + x;
            if (currVal > maxVal)
            {
                maxVal = currVal;
                y = x;
            }
            else if (currVal == maxVal && x > y)
            {
                y = x;
            }
        }

        printf("%d\n", y);
    }

    return 0;
}