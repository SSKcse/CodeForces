#include <iostream>
#include <string>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        string str = "";
        char ch = 'a';
        while (b--)
        {
            str = str + ch++;
        }

        string str2 = "";
        while (a--)
        {
            str2 = str2 + str;
        }

        cout << str2 << endl;
    }

    return 0;
}
