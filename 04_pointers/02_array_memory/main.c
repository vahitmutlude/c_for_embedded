#include <stdio.h>
#include <stdint.h>

int main(){
    uint32_t array[5] = {10,20,30,40,50};
    for (int i=0 ; i < 5 ; i++){
        
        printf("Wert :%d und Adresse: %p\n", array[i], &array[i]);
        

    }



}