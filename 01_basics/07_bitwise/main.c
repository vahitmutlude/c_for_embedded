#include <stdio.h>
#include <stdint.h>

int main(void) {

uint8_t reg = 0b00001111;
uint8_t reg_example = 0b00000000;
reg_example = reg_example | (1 << 3);
printf("fast reg_example = %x\n", reg_example);
printf("the original reg = %x\n", reg);
reg = reg | (1 << 6);
printf("reg after 6th bit set = %x\n", reg);
reg = reg & ~(1 << 2);
printf("reg after 2th bit clear = %x\n", reg);

return 0;
}