// Title: Print Fibonacci Series
// 0 1 1 2 3 5 8 ...............

#include <stdio.h>
int main()
{
    int n, i = 1;

    int last = 0, current = 1;
    printf("How many terms do you want to print? ");
    scanf("%d", &n);

    while (i <= n)
    {
        if(last == 0 && current == 1){
            printf("%d %d ", last, current);
            i = i + 2;
        }

        int next = last + current;
        printf("%d ", next);

        last = current;
        current = next;
        i++;
    }
    printf("\n");
}