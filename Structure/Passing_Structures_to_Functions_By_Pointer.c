#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Point{
    int x;
    int y;
};

void movePoint(struct Point *k,int dx,int dy) {
    k->x += dx;
    k->y += dy;
}

int main() {
    struct Point p1 = {5,10};
    movePoint(&p1,3,4);
    printf("Move point: (%d,%d)\n",p1.x,p1.y);
}



