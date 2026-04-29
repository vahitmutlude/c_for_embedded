#include <stdio.h>
#include <stdint.h>

int main(void){

uint8_t i = 6;
printf("Just with normal while loop:\n");

while (i<=5){
    printf("%d\n",i);
    i++; 
} 

uint8_t x = 6;
printf("Now with do-while:\n");

do{
printf("%d\n",x);
x++;
} while(x<=5);

return 0;
}