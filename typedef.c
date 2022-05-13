#include<stdio.h>

typedef struct {
    int x;
    int y;
} point;

typedef struct {
    int wheels;
    int seats;
    point position;
} Vehicle;


int main() {


point p1;
p1.x = 10;
p1.y = 20;

Vehicle v1;
v1.wheels = 4;
v1.seats = 2;
v1.position = p1;

printf("%d",v1.wheels);
printf("\n");
printf("%d",v1.seats);
printf("\n");
printf("%d",v1.position.x);
printf("\n");
printf("%d",v1.position.y);

return 0;

}