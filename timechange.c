#include <stdio.h>
int main()
{
    int hours, min, sec, day;
    printf("enter the value of hours =");
    scanf("%d", &hours);
    printf("enter the vaue of min =");
    scanf("%d", &min);
    printf("enter the value of sec =");
    scanf("%d", &sec);
    printf("enter the value of day =");
    scanf("%d", &day);
    if (sec > 60)
    {
        sec = sec % 60;
        min += 1;
    }
    if (min > 60)
    {
        min = min % 60;
        hours += 1;
    }
    if (hours > 24)
    {
        hours = hours % 60;
        day += 1;
    }
    printf("day %d\n", day);
    printf("hours %d\n", hours);
    printf("min %d\n", min);
    printf("sec = %d\n", sec);

    return 0;
}