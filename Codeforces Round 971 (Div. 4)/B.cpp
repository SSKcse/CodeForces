#include <bits/stdc++.h>
using namespace std;
#define cool_ssk() ios_base::sync_with_stdio(0);
#define input cin >>
#define print cout <<
#define ll long long
#define endl "\n"

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> result;

        for (int i = 0; i < n; ++i)
        {
            string row;
            cin >> row;

            for (int j = 0; j < 4; ++j)
            {
                if (row[j] == '#')
                {
                    result.push_back(j + 1); 
                    break;
                }
            }
        }

        for (int i = result.size() - 1; i >= 0; --i)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
}

signed main()
{
    cool_ssk();

    int t;
    // cin >> t;
    // while(t--)

    solve();
    return 0;
}
