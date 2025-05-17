#include <stdio.h>

void line_printer(char c, int max, int i)
{
    int j = 1;
    while (j <= max)
    {
        int printed = 1 + (i - 1) * 2;
        int space = ((max - printed) / 2);

        if (space < j && j <= (max - space))
        {
            printf("%c", c);
        }
        else
        {
            printf(" ");
        }

        j++;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int max = 1 + (n - 1) * 2;

    int i = 1;
    int stage = 1;

    while (i>0)
    {
        if (i % 2 == 0)
        {
            line_printer('-', max, i);
        }
        else
        {
            line_printer('#', max, i);
        }
        printf("\n");

        if (i == n)
        {
            stage = 2;
        }
        if(stage == 1){
            i++;
        } else {
            i--;
        }
    }
    return 0;
}
// ===========================================================================================
// #include <stdio.h>
// void space_print(int space)
// {
//     for (int i = 0; i < space; i++)
//     {
//         printf(" ");
//     }
// }
// void pattern_print(int pattern)
// {
//     for (int i = 0; i < pattern; i++)
//     {
//         printf("#");
//     }
// }
// void line_print(int line)
// {
//     for (int i = 0; i < line; i++)
//     {
//         printf("-");
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int space = n - 1;
//     int star = 1;
//     int line = 3;
//     // pattern print;
//     for (int i = 1; i <= n; i++)
//     {
//         space_print(space);
//         if (i % 2 != 0)
//         {
//             pattern_print(star);
//             star = star + 4;
//         }
//         else if (i % 2 == 0)
//         {
//             line_print(line);
//             line = line + 4;
//         }
//         printf("\n");
//         space--;
//     }
   
//  // reverse print 
//     int space1=1;
//     int star1=n+1;
//     int line1=n-1;
//     int line2=n+4;
//     int star2=n+2;
//     for(int i=1;i<=n-1;i++){
//         space_print(space1);
//         if(n%2==0){
//             pattern_print(star1);
//             star1=star1-4;
//             printf("\n");
//             space1++;
//             space_print(space1);
//             line_print(line1);
//             line1=line1-3;
//         }
//         else if(n%2!=0){
//             line_print(line2);
//             line2=line2-4;
//             printf("\n");
//              space1+=1;
//             space_print(space1);
//             pattern_print(star2);
//             star2=star2-4;
//         }
//         space1++;

//         printf("\n");
        
//     }

//     return 0;
// }