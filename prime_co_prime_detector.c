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

// Function to calculate GCD using Euclidean algorithm
int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Prime checks
    if (is_prime(a))
        printf("%d is a prime number\n", a);
    else
        printf("%d is not a prime number\n", a);
    
    if (is_prime(b))
        printf("%d is a prime number\n", b);
    else
        printf("%d is not a prime number\n", b);

    // Co-prime check
    int gcd = find_gcd(a, b);
    if (gcd == 1)
        printf("These are co-prime numbers\n");
    else
        printf("These are not co-prime numbers\n");

    return 0;
}
