#include <stdio.h>
#include <stdint.h>

int my_adder(uint16_t a, uint16_t b){
    return a+b;
}

void my_message(uint16_t sum){
    printf("Hi, the result is ready! = %d", sum);
}

int main(void){
    int res = my_adder(144,16);
    my_message(res);
    
}