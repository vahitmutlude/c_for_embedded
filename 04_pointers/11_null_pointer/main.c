#include <stdio.h>

int main(){

int *pointer1 = NULL;

//*pointer1 = 99;

if (pointer1 != NULL) {
    *pointer1 = 99;
    printf("succesful\n");
} else {
    printf("pointer is NULL\n");
}

int x = 10;
pointer1 = &x;   

if (pointer1 != NULL) {
    *pointer1 = 99;
    printf("got written, x = %d\n", x);
}

}