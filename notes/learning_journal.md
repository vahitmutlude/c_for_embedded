# Learning Journal

## Day 1 — 26.04.2026
- Compiled first two C program with GCC on MSYS2/MINGW64
- double is 8 bytes, float is 4 bytes and on STM32, double is avoided because it's slow and memory heavy
- In embedded, main() never returns and there's always a while(1) loop instead

## Day 2 — 27.04.2026
- Learned how to define an integer with a specific bit length using uint8_t, uint16_t, etc.
- Printing a signed value with %u prints wrong output because %u interprets it as unsigned
- Calling a function using void
- Using global integers
- Difference between static int and a normal local int

## Day 3 — 28.04.2026
- printf format specifiers: %d, %u, %x, %X
- hex output: decimal 2004 = 0x7D4
- arithmetic operators: +, -, *, %
- comparison operators: >, ==  — result is 0 or 1
- logical operators: &&, ||, !
- uint8_t overflow: 2004 doesn't fit in 8 bits, max is 255