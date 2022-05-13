#include<stdio.h>

typedef struct{
    int x;
    int y;
} point;

void move(point *p){
    p->x += 1;
    p->y += 1;
}
int main() {
point p1 = {10,20};
move(&p1);
printf("%d",p1.x);
printf("\n");
printf("%d",p1.y);
printf("\n");
    return 0;
}