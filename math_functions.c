#include<stdio.h>
#include<math.h>

int main()
{
    double n;
    printf("Enter the number: ");
    scanf("%lf", &n);
    double square_value = pow(n,2);
    double sqrt_value = sqrt(n);

    // ceil() increases the value to the nearest integer
    // For example: 7.4 is rounded to 8.
    // Let's say ceil == ceiling. It takes the value to the ceiling.
    double ceil_value = ceil(sqrt_value);

    // floor() decreases the value to the nearest integer
    // For example: 7.4 is rounded to 7
    // floor as it sounds takes the value to the floor
    double floor_value = floor(sqrt_value);
    
    // round() rounds the value to the nearest int.
    // For example: 7.4 is rounded to 7, while 7.6 is rounded to 8
    // round tries to be just.
    // SO if (value < 0.5) take them to 0, and otherwise take them to 1
    double round_value = round(sqrt_value);


    printf("Square of %.2lf is           : %.2lf\n", n, pow(n,2));
    printf("Square root of %.2lf is      : %.9lf\n", n, sqrt(n));
    printf("If we ceil that value we get : %.2lf\n", ceil_value);
    printf("If we floor that value we get: %.2lf\n", floor_value);
    printf("If we round that value we get: %.2lf\n", round_value);
}