#include <stdio.h>
#include <stdint.h>

int main(void) {

    uint8_t a = 255;
    uint16_t b = 65535;
    uint32_t c = 4294967295;
    int8_t d = -128;

    printf("uint8_t: %u ,   size: %zu\n",       a, sizeof(a));
    printf("uint16_t: %u ,  size: %zu\n",       b, sizeof(b));
    printf("uint32_t: %u ,  size: %zu\n",       c, sizeof(c));
    /*printf("int8_t: %u ,  size: %zu\n",       d, sizeof(d)); - it shoud be %d for minus sign */
    printf("int8_t: %d ,    size: %zu\n",       d, sizeof(d));


}   