#include <stdio.h>

int main()
{
    int a, b, gcd;
    
    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    printf("GCD of %d and %d is %d\n", a, b, gcd);
}