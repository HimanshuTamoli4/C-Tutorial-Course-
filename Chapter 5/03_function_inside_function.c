#include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();
int main()
{
    goodMorning();

    return 0;
}

void goodMorning()
{
    printf(" good Morning Himanshu\n ");
    goodAfternoon();
}

void goodAfternoon()
{
    printf(" good Afternoon Himanshu\n ");
    goodNight();
}

void goodNight()
{
    printf(" good Night Himanshu\n ");
}
