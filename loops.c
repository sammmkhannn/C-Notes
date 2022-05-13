#include<stdio.h>


int main() {
    //while loop
    for(int i = 0; i<10; i++ ){
        printf("%d",i);
    }

    //do while loop
    int counter = 0;
    do{
        printf("%d",counter);
        counter +=1;
    } while(counter<10);
    int c = 0;
    while(c<10){
        printf("%d",c);
        c +=1;
    }

    return 0;
}