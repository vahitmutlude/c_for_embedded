#include <stdio.h>

int global = 10;

void counter(void){
    static int s = 0;
    int local = 0;
    s++;
    local++;
    printf("static: %d, local: %d\n", s , local);
}

int main(void){
    printf("global: %d\n", global);
    counter();
    counter();
    counter();
    return 0;
    



}