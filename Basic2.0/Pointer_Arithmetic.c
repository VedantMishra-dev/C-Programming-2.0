#include<stdio.h>

int main() {
    int y = 4;
    int *Py = &y;
    int x = 6;
    int *Px = &x;
    printf("%d",(*Px + *Py));

    printf("%d\n", *Px);

    printf("%p\n",(Px));
    printf("%p\n", (void*)&(*Px)); 
    return 0;
}