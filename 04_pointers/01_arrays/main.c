#include <stdio.h>
#include <stdint.h>

#define SIZE 5

int main(void){
    uint8_t numbers[SIZE] = {12, 25, 7, 99, 41};
    int sum = 0;
    for (int i = 0 ; i < SIZE ; i++ ) {

        printf("%d\n",numbers[i]);
        
        sum = sum + numbers[i];
        
    }
    printf("Addition of all numbers in numbers array: %d",sum);

}