#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, l, r, k;
        scanf("%d %d %d %d", &n, &l, &r, &k);

        int a[201]; // Assuming the maximum temperature could be 200
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int current_temp = k;
        int drink_time = -1;

        for (int i = 0; i <= n; i++)
        {
            if (current_temp >= l && current_temp <= r)
            {
                drink_time = i;
                break;
            }
            else if (current_temp > r && i < n)
            {
                current_temp--; // Cooling the water
            }
            else if (current_temp < l && i < n)
            {
                current_temp++; // Heating the water
            }
            else
            {
                break; // Temperature adjustment cannot be made further
            }
        }

        printf("%d\n", drink_time);
    }

    return 0;
}
