#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char * name;
    int age;
} person;

int main() {
    person * myPerson = (person *) malloc(sizeof(person));

    myPerson -> name = "John Smith";
    myPerson -> age = 27;


    printf("%s is %d years old.\n", myPerson -> name, myPerson -> age);
    free(myPerson);
    return 0;
}