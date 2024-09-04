#include <bits/stdc++.h>
using namespace std;
#define cool_ssk() ios_base::sync_with_stdio(0);
#define input cin >>
#define print cout <<
#define ll long long
#define endl "\n"

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int result = min((a - a) + (b - a), (b - b) + (b - a));
        cout << result << endl;
    }

    return 0;
}
