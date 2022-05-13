#include<stdio.h>
#include<string.h>
int main() {

char * name = "John Smith";
int age = 27;

/* prints out 'John Smith is 27 years old.' */
printf("%s is %d years old.\n", name, age);

char str[] = "hello, world!";

printf("%s",name);
char dest[20]="Hello";
char src[20]="World";
strncat(dest,src,3);
printf("%s\n",dest);
strncat(dest,src,20);
printf("%s\n",dest);

return 0;
}

