#include<stdio.h>
static int updateCounter(int value);
int runner() {
   static int count = 0;
    count++;
    return count;
}

int main()
{
    printf("%d ", runner());
    printf("%d ", runner());
    printf("%d ", updateCounter(10));
    return 0;
}


//static function
//limit the scope to the current file

static int updateCounter(int value){
    return runner() + value;
}