#include<stdio.h>

int main(){
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    int store = input;
    int reverse = 0;

    while(input != 0){
        int remainder = input % 10;
        reverse = reverse * 10 + remainder;
        input = input / 10;
    }
    if (store == reverse){
        printf("The number is a palindrome\n");
    }
    else{
        printf("The number is not a palindrome\n");
    }
}