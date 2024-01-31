#include <iostream>
#include <string>
#define long long int

using namespace std;

int main()
{
    int t;
    cin >> t;
    int a = 0, b = 0;
    while (t--)
    {
        cin >> a >> b;

        string str = "\0";
        char ch = 'a';
        while (b--)
        {
            str = str + (ch++);
        }
        string str2 = "\0";
        while (a--)
        {
            str2 = str2 + str;
        }
        cout << str2 << endl;
    }
}