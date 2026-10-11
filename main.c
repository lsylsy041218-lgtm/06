#include <stdio.h>

int sumTwo(int a, int b){

    return a + b;
}

int square(int n){

    return n*n;
}

int get_max (int x, int y){
    int max;
    if (x>=y){
        max = x;
    }
    else
        max = y;

    return max;
}

int main(void){

    printf("sumTwo result : %i\n", sumTwo(2, 5));
    printf("square result : %i\n", square(10));
    printf("get_max result : %i\n", get_max(9, 3));

    return 0;
}