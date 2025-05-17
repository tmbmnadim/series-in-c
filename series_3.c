// Title: 1 + 1/2^2 + 1/3^2 + ........ + 1/n^2

#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    double sum = 0.0, i = 1;

    printf("How many terms do you want to sum? ");
    scanf("%d", &n);

    while (i <= n)
    {
        double term = (1.0 / (double)pow(i, 2));
        
        sum = sum + term;
        i++;
    }
    printf("Sum is %0.15f\n", sum);
}