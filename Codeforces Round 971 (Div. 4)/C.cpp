#include <iostream>
using namespace std;
#define cool_ssk() ios_base::sync_with_stdio(0);
#define input cin >>
#define print cout <<
#define ll long long
#define endl "\n"

int cm(int x, int y, int k)
{
    int moves = 0;
    int A = 0, B = 0;
    bool D = true;

    while (A < x || B < y)
    {
        if (D)
        {
            int jump = min(k, x - A);
            A += jump;
        }
        else
        {
            int jump = min(k, y - B);
            B += jump;
        }
        moves++;
        D = !D;
    }

    return moves;
}

int main()
{
    cool_ssk();
    int t;
    input t;

    while (t--)
    {
        int x, y, k;
        input x >> y >> k;
        print cm(x, y, k) << endl;
    }

    return 0;
}