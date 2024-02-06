#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    int first_black = -1; // Initialize to an invalid index
    int last_black = -1;  // Initialize to an invalid index

    // Find the first and last occurrences of 'B'
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'B')
        {
            if (first_black == -1)
            {
                first_black = i; // Store the index of the first black cell
            }
            last_black = i; // Update the index of the last black cell
        }
    }

    // Calculate the length of the segment to be painted white
    int min_segment_length = (first_black != -1) ? (last_black - first_black + 1) : 0;

    cout << min_segment_length << endl;
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
