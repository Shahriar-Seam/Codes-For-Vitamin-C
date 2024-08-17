// https://vjudge.net/problem/Gym-287306C

#include <stdio.h>

int main()
{
    long long x, y;

    scanf("%lld %lld", &x, &y);

    printf("%lld + %lld = %lld\n", x, y, x + y);
    printf("%lld * %lld = %lld\n", x, y, x * y);
    printf("%lld - %lld = %lld\n", x, y, x - y);

    return 0;
}