// Title: 1^4 + 3^4 + 5^4 + ........ + n^4

#include <stdio.h>

int main()
{
    int n, i = 1,term = 1;
    long long int sum = 0;

    printf("How many terms do you want to sum? ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + (long long)(term * term * term * term);
        term = term + 2;
        i++;
    }

    printf("Sum is %d\n", sum);
}