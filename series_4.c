// Title: 1 * 3 * 5 * ............ * n

#include <stdio.h>
int main()
{
    int n, i = 1;
    long long int product = 1;

    printf("How many terms do you want to multiply? ");
    scanf("%d", &n);
    int term = 1;

    while (i <= n)
    {
        product = product * term;
        term = term + 2;
        i++;
    }
    printf("Product is %llu\n", product);
}