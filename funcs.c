#include<stdio.h>
void sayGoodBye();
void sayHello() {
    printf("Hello, World!");
}
int main(){
    sayHello();
    sayGoodBye();
    return 0;
}


void sayGoodBye(){
    printf("GoodBye");
}