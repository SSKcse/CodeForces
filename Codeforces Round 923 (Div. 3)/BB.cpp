#include <bits/stdc++.h>
typedef long long ll;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define fs(lcv, hi) for (int lcv = 0; lcv < hi; lcv++)
#define fb(lcv, hi) for (lcv = hi; lcv >= 0; lcv--)

using namespace std;

// Not Working ....Trash Code

void solve()
{
   
    int n;
    cin >> n;
    vector<int> v(n);
    fs(i,n)
      cin >> v[i];

      unordered_map<char, int> mp;
      for (char ch = 'a'; ch <= 'z'; ch++)
      {
        mp.insert({ch, 0});

      }

      string ans = "";
      for (int i = 0; i < n; i++)
      {
        for (auto x:mp)
        {
            if(x.second == v[i])
            {
                ans+=x.first;
                mp[x.first]++;
                break;
            }
        }
        
      }
      
      cout<<ans<<endl;
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
