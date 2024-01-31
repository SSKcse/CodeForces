#include <stdio.h>

void solve()
{
    long long x, n;
    scanf("%lld %lld", &x, &n);

    long long ans = 1;
    for (long long i = 1; i <= x; i++)
    {
        if (x % i == 0 && x / i >= n)
        {
            ans = (ans > i) ? ans : i;
        }
        if (x / i < n)
        {
            break;
        }
    }

    printf("%lld\n", ans);
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        solve();
    }

    return 0;
}
