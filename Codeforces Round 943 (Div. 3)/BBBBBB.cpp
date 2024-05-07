#include <iostream>
#include <bits/stdc++.h>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);

using namespace std;

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int ans = 0, j = 0;
        for (int i = 0; i < m and j < n; i++)
        {
            if (a[j] == b[i])
            {
                ++ans;
                ++j;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
