#include <stdint.h>
#include <stdio.h>

int main(void){
uint8_t value = 1;
switch (value){

    case 1:
        printf("IDLE");
        break;

    case 2:
        printf("RUNNING");
        break;
    
    case 3:
        printf("ERROR");
        break;
            
    default:
        printf("UNKNOWN");   
        break;
}
return 0;
}