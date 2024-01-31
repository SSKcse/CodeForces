#include <iostream>
using namespace std;

void solve()
{
    long long x, n;
    cin >> x >> n;

    long long ans = 1;
    for (long long i = 1; i <= x; i++)
    {
        if (x % i == 0 && x / i >= n)
        {
            ans = max(ans, i);
        }
        if (x / i < n)
        {
            break;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
