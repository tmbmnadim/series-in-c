#include <stdio.h>

int main()
{
    int a, b, lcm, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    lcm = max;

    while ((lcm % a != 0) || (lcm % b != 0))
    {
        lcm += max;
    }
    printf("LCM of %d and %d is %d\n", a, b, lcm);
}