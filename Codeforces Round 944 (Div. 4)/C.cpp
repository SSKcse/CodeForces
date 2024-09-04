#include <iostream>
using namespace std;

int main()
{
    int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        if (min(a, b) < min(c, d) && max(a, b) > min(c, d) && max(c, d) > max(a, b))
        {
            cout << "yes" << endl;
        }

        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
