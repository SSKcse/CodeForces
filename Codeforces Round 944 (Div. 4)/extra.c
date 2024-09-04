#include <stdio.h>

int is_intersect(int a, int b, int c, int d)
{
    // Check for special cases (parallel lines)
    if ((a == b && c == d) || (a != b && c != d))
    {
        return 0; // Parallel lines never intersect
    }

    // Check for strings intersecting at the center (position 6)
    if ((a == 6 && b == 6) || (c == 6 && d == 6))
    {
        return 1; // Any line passing through the center intersects all others
    }

    // Calculate slopes (avoid division by zero for horizontal lines or center case)
    double slope1 = (a != b) ? ((double)b - a) / ((double)b - (a == 6 ? 0 : a)) : (a == 6 ? -1.0 / 0.0 : 0.0); // Handle vertical and center case
    double slope2 = (c != d) ? ((double)d - c) / ((double)d - (c == 6 ? 0 : c)) : (c == 6 ? -1.0 / 0.0 : 0.0); // Handle vertical and center case

    // Check if slopes are negative reciprocals (lines intersect)
    return slope1 * slope2 < 0;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; ++i)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if (is_intersect(a, b, c, d))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
