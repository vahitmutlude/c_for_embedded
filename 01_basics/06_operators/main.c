#include <stdint.h>
#include <stdio.h>

int main(void){

uint16_t a = 1990;
uint16_t b = 2004;

printf("a + b = %d\n",a+b);
printf("b - c = %d\n",b-a);
printf("a x b = %d\n",a*b);
printf("a mod b = %d\n",a%b);

printf("is a bigger then b? => %d\n",a<b);
printf("is a equal to b? => %d\n",a==b);

printf("is a<=b && (a>b || b!=a) is this true? => %d\n",a<=b && (a>b || b!=a));

return 0;

}