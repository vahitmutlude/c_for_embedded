#include <stdio.h>

void change(int *p){

    *p = 99;
}


int main(void){

    int x = 2026;
    printf("before: %d\n", x);
    change(&x);
    printf("after : %d\n", x);
    

}