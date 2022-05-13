#include<stdio.h>



int main() {
    int array[10][20];

    for(int i = 0; i<10; i++){
        for(int j = 0; j<20; j++){
            array[i][j] = i*j;
        }
    }

    for(int i = 0; i<10; i++){
        for(int j = 0; j<20; j++){
            printf("%d",array[i][j]);
            printf("\n");
        }
    }

    int ndarray[1][1][1] = {{{1}}};
    printf("%d",ndarray[0][0][0]);
    return 0;
}