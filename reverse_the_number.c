#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int reverse = 0;
    
    while(n!=0){
        int rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    printf("Reverse is: %d", reverse);

    return 0;
}
