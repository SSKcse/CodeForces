#include <bits/stdc++.h>
typedef long long ll;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define fs(lcv, hi) for (int lcv = 0; lcv < hi; lcv++)
#define fb(lcv, hi) for (lcv = hi; lcv >= 0; lcv--)

using namespace std;

void solve()
{
    ll x,n;
    cin>>x>>n;

    ll ans = 1;
    for(ll i=1; i<=x;i++)
    {
        if (x%i == 0 && x/i>=n)
        ans = i;
        if(x/i < n)
        break;
    }
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
