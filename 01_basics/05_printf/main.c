#include <stdio.h>
#include <stdint.h>

int main(void){

uint8_t a = 123;
uint16_t b = 2004;
int32_t c = -77;

printf("mit d: a: %d, b: %d, c:%d\n",a,b,c);
printf("mit x: a: %x, b: %x, c:%x\n",a,b,c);
printf("mit X: a: %X, b: %X, c:%X\n",a,b,c);

return 0;

}