#include <stdio.h>
#include <math.h>

// Efficient prime check using sqrt(n)
int is_prime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    int limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    // Co-prime check
    if (a == 1)
        printf("This is a co-prime of all other numbers\n");

    // Prime checks
    if (is_prime(a))
        printf("%d is a prime number\n", a);
    else
        printf("%d is not a prime number\n", a);

    return 0;
}
