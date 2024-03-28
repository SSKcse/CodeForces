
/// Accpeted

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char time[6];
        scanf("%s", time);

        int hour = (time[0] - '0') * 10 + (time[1] - '0');
        int minute = (time[3] - '0') * 10 + (time[4] - '0');

        char am_pm[3];
        if (hour < 12)
        {
            strcpy(am_pm, "AM");
        }
        else
        {
            strcpy(am_pm, "PM");
            if (hour > 12)
            {
                hour -= 12;
            }
        }

        if (hour == 0)
        {
            hour = 12;
        }

        printf("%02d:%02d %s\n", hour, minute, am_pm);
    }

    return 0;
}