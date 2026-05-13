#include <stdio.h>

int main(){

int array[5] = {10,20,30,40,50};
int *p = array;

printf("1- same: %d  and %d\n", array[2], *(array + 2));
printf("2- same: %d  and %d\n", p[2], *(p + 2));
p = p + 1;
printf("2nd member of array: %d\n", p[0]);


}