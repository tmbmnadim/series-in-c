// Title: 1*3*4*9+ 2*5*6*18 + 3*7*8*27 + ............... + n1*n2*n3*n4

#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;
    int d1 = 1, d2 = 3, d3 = 4, d4 = 9;
    int sum = 0;

    printf("4 digits for the last term are: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    // Calculate the number of safe iterations
    int min_iter = n1;
    if (n2 < min_iter) min_iter = n2;
    if (n3 < min_iter) min_iter = n3;
    if (n4 < min_iter) min_iter = n4;

    for (int i = 1; i <= min_iter; i++)
    {
        sum += d1 * d2 * d3 * d4;
        d1 += 1;
        d2 += 2;
        d3 += 2;
        d4 += 9;
    }

    printf("Sum is %d\n", sum);

    return 0;
}
