// Title: 2^3 * 4^3 * 6^3 * ........ * n^3

#include <stdio.h>
#include <math.h>

int main()
{
    int n, i = 1,term = 2;
    double sum = 1;

    printf("How many terms do you want to sum? ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum * pow(term, 3);
        term = term + 2;
        i++;
    }

    printf("Sum is %.0lf\n", sum);
}