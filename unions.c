#include <stdio.h>
#include <stdlib.h>

union intParts
{
    int theint;
    char bytes[sizeof(int)];
};

int main()
{
    union intParts parts;
    parts.theint = 2353425;
    printf("the int is %i\n The Bytes are [%i,%i,%i,%i]\n", parts.theint, parts.bytes[0], parts.bytes[1], parts.bytes[2], parts.bytes[3]);
    return 0;
}
