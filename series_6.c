// Title: 1^4 * 3^4 * 5^4 * ........ * n^4

#include <stdio.h>

int main()
{
    int n, i = 1, term = 1;
    double product = 1;

    printf("How many terms do you want to multiply? ");
    scanf("%d", &n);

    while (i <= n)
    {
        product = product * (unsigned long long)term * term * term * term;

        term += 2;
        i++;
    }

    printf("Product is %.0lf\n", product);
}
