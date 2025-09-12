#include<stdio.h>

int main() {
    int y = 4;
    int *Py = &y;
    int x = 6;
    int *Px = &x;
    printf("%d",(*Px + *Py));
    return 0;
}