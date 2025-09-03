#include <stdio.h>
void factorial_first_n_number(int n)
{
    for (int j = 0; j < n; j++)
    {
        int f = 1;
        for (int i = n; i > 0; i--)
        {
            f = f * i;
        }
        printf("the factorial of %d is %d\n", j, f);
    }
}
int main()
{
    int n;
    printf("Enter No: ");
    scanf("%d", &n);
    factorial_first_n_number(n);
}