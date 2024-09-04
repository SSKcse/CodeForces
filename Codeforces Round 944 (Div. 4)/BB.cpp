#include <string>
#include <bitset>
#include <iostream>
#include <istream>


using namespace std;

#define BIT(i, j) (((i) >> (j)) & 1LL)
#define MASK(i) (1LL << (i))
#define pii pair<int, int>
#define fi first
#define se second
#define ll long long
#define int ll
#define endl "\n"

template <typename T1, typename T2>
bool mini(T1 &a, T2 b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <typename T1, typename T2>
bool maxi(T1 &a, T2 b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
const ll LINF = 1e18;
const int INF = 1e9;
const int MAXN = 5e5 + 7;
const int MOD = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;
    for (int i = 1; i < (int)s.size(); ++i)
    {
        if (s[i] != s[i - 1])
        {
            swap(s[i], s[i - 1]);
            cout << "YES\n"
                 << s;
            return;
        }
    }
    cout << "NO";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#define task "test"
    if (fopen(task ".inp", "r"))
    {
        freopen(task ".inp", "r", stdin);
        freopen(task ".out", "w", stdout);
    }
    int test = 1;
    cin >> test;
    for (int i = 1; i <= test; i++)
    {
        solve();
        cout << endl;
    }
    return 0;
}
