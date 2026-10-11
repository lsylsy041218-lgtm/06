#include <stdio.h>

int factorial (int a){

    int i;
    int res = 1;
    for (i=0; i<a; i++)
    {
        res *= (i+1);
    }
    return res;
}

int combination (int n, int r){
    
    int up, down;

    up = factorial(n);
    down = factorial(n-r) * factorial(r);

    return (up/down);
}

int get_integer (char x){
    int a;
    printf("%c 값을 입력해주세요. : ", x);
    scanf("%i", &a);
    return a;
}

int main(void){
    int x, y, k;
    x = get_integer('n');
    y = get_integer('r');

    k = combination(x,y);
    printf("최종값은 %i 입니다.", k);

    return 0;
}