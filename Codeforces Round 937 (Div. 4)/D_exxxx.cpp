

/// Not Accpeted

#include <bits/stdc++.h>

using namespace std;

long long toBinary(int n)
{
    string r;
    while (n != 0)
    {
        r = (n % 2 == 0 ? "0" : "1") + r;
        n /= 2;
    }
    long long num = stoi(r) * 1LL;
    return num;
}

void solve(unordered_map<int, bool> mp)
{

    int n;
    cin >> n;
    if (mp.find(n) == mp.end())
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    unordered_map<int, bool> mp;
    for (int a = 1; a <= 31; a++)
    {
        long long bA = toBinary(a);
        if (bA > 100000)
            break;
        for (int b = 1; b <= 31; b++)
        {
            long long bB = toBinary(b);
            if (bA * bB > 100000)
                break;
            for (int c = 1; c <= 31; c++)
            {
                long long bC = toBinary(c);
                if (bA * bB * bC > 100000)
                    break;
                for (int d = 1; d <= 31; d++)
                {
                    long long bD = toBinary(d);
                    if (bA * bB * bC * bD > 100000)
                        break;
                    for (int e = 1; e <= 31; e++)
                    {
                        long long bE = toBinary(e);
                        if (bA * bB * bC * bD * bE > 100000)
                            break;
                        mp[bA * bB * bC * bD * bE] = true;
                        mp[bA * bB * bC * bD * bE] = true;
                    }
                }
            }
        }
    }
}