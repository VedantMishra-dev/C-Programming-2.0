#include <stdio.h>
int main() {
    int n;
    printf("Enter No: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) {
            printf("  ");
        }
        //1, 3, 5, ...
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("%d ",j+1);
        }
        printf("\n");
    }
    return 0;
}
