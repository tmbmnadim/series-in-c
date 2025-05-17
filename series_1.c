// Title: 1.5 + 2.5 + 3.5 + ........ + n

#include <stdio.h>

int main()
{
    int n, i = 1;
    float sum = 0, term = 1.5;
    
    printf("How many terms do you want to sum? ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + term;
        term = term + 1.0;
        i++;
    }

    printf("Sum is %0.2f\n", sum);
}