#include <stdio.h>

int main(){

int x = 10;
int y = 20;

const int *pointer1 = &x;
int * const pointer2 = &x;
const int * const pointer3 = &x;

//*pointer1 = 99;
pointer1 = &y;

//*pointer2 = 99;
//pointer2 = &y;

//*pointer3 = 99;
//pointer3 = &y;

}