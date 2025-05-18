#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int i = 1;
    int stage = 1;
    
    while (i > 0)
    {
        int j = 1;
        char ch = 'A' + i - 1;

        while (j <= n)
        {
            if (j > (n - i))
            {
                printf("%c ", ch);
            }
            else
            {
                printf("  ");
            }
            j++;
        }
        printf("\n");

        if (i == n)
        {
            stage = 2;
        }
        if (stage == 1)
        {
            i++;
        }
        else
        {
            i--;
        }
    }

    return 0;
}
