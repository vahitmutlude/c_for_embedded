#include <stdio.h>

int main(){

int array[5] = {10,20,30,40,50};

int *p = &array[0];

for (int i=0 ; i < 5 ; i++ ) {
    
    printf("WERT: %d  ADRESSE: %p\n",*(p+i), p+i);
}




}