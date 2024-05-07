#include <iostream>
#include <vector>
#include <random>
using namespace std;

void problemC()
{
    int n;
    cin >> n;

    vector<int> x(n - 1);
    for (int i = 0; i < n - 1; ++i)
        cin >> x[i];

    vector<int> a(n);
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(1, 1000000000);
    a[0] = dis(gen);

    for (int i = 1; i < n; ++i)
        a[i] = x[i - 1] + a[i - 1];

    for (int i = 0; i < n; ++i)
    {
        cout << a[i]-(a[i-1]) << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        problemC();
    return 0;
}