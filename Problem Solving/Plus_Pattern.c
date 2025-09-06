#include <stdio.h>
int main()
{
    int n;
    while (1)
    {
        printf("Enter Odd No: ");
        scanf("%d", &n);
         if (n % 2 == 0)
        {
            printf("Please Enter Odd No : \n");
            continue;
        }
        int mid = (n + 1) / 2;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == mid || j == mid)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
    }
}