// Uses more memory (full copy is made)
// Modifications inside the function don't affect the original

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Point {
    int x;
    int y;
};

void printPoint(struct Point y) {
    printf("Point coordinates: (%d, %d)\n", y.x, y.y);
    y.x = 100; // Modification won't affect original
    printf("%d\n", y.x); // the result of this line will be 100
}

 
int main() {
    struct Point p1 = {5,10};
    printPoint(p1);
    printf("Original point after function call: (%d, %d)\n", p1.x, p1.y); 
    // you might be thinking that this line should print 100,10 but the thing is 
    // in we are passing through the printPoint(p1) is like we are passing a copy of 
    //strcuture not original one so it did't change the original value
    return 0;
}
