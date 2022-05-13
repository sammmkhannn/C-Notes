#include<stdio.h>

//pass by value
void addone(int n) {
    // n is local variable which only exists within the function scope
    n++; // therefore incrementing it has no effect
}
//pass by reference
void increment(int * i ) {

    // i is a pointer to an int
    // *i is the value of the int that i points to
    *i += 1; // incrementing the value of i has an effect
}

int main() {
    
int n;
printf("Before: %d\n", n);
addone(n);
printf("After: %d\n", n);
increment(&n);
printf("After: %d\n", n);
return 0;
}