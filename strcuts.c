#include<stdio.h>

struct point{
    int x;
    int y;
};

// typedef struct Vehicle{
//     int wheels;
//     int seats;
//     int speed;
//     struct point location;
// };



 
// Vehicle v1;
//     v1.wheels = 4;
//     v1.seats = 2;
//     v1.speed = 100;
//     v1.location = p1;

// Vehicle v2;
//     v2.wheels = 4;
//     v2.seats = 2;
//     v2.speed = 100;
//     v2.location = p2;
int main() {

    struct point p1;
    p1.x = 10;
    p1.y = 20;

    struct point p2;
    p2.x = 30;
    p2.y = 40;


    printf("%d",p1.x);
    printf("\n");
    printf("%d",p1.y);
    printf("\n");
    printf("%d",p2.x);
    printf("\n");
    printf("%d",p2.y);
    printf("\n");

    

    // printf("%d",v1.wheels);
    // printf("\n");
    // printf("%d",v1.seats);
    // printf("\n");
    // printf("%d",v1.speed);
    // printf("\n");
    // printf("%d",v1.location.x);
    // printf("\n");
    // printf("%d",v1.location.y);
    // printf("\n");
    return 0;
}