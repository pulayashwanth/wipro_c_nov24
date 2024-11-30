#include <stdio.h>

int main()
{
    float num = 17 / 3;         // One type casting happens. from 5 to 5.0f which is implicit up cast
    printf("%f  %d", num, num); // 5.000000
}