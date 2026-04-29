#include <stdio.h>
#include <stdint.h>

int main(void){

uint8_t temp = 39;

if (temp >= 80){
    printf("Device temperature is high!");

} else if (temp >= 50 && temp < 80){
    printf("Device temperature is normal.");

} else {
    printf("Device temperature is low!");
}

return 0;
}
