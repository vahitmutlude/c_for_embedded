#include <stdio.h>

int factorial(int n){
    if (n <= 1){

        return 1;
    }
    return n * factorial(n-1);

}

int factorial_loop(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * i;
    }
    return res;
}

int main(void){

    printf("after recursive function: %d\n", factorial(5));
    printf("after for loop: %d\n", factorial_loop(5));

    
    }


