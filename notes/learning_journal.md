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
- Learned bitwise operators: | to set a bit, & ~ to clear a bit, << to shift
- To set bit n: reg | (1 << n), to clear bit n: reg & ~(1 << n)

## Day 4 — 29.04.2026
- if / else if / else for branching based on conditions
- || means OR, && means AND but be careful which one you need
- switch / case for handling multiple discrete values, like a state machine
- break exits a switch case, default handles unmatched values
- while loop checks the condition first, do-while runs at least once
- in embedded, main() always has a while(1) that runs forever
- for loop has 3 parts: start, condition, increment
- break exits the loop completely, continue skips to the next iteration

## Day 5 — 30.04.2026
- functions are reusable code blocks: return_type name(parameters) { ... }
- void means "returns nothing", but can still take parameters
- the void in main(void) means "takes no parameters" so different meaning depending on position
- in embedded, code is split into small functions like read_sensor(), set_led()

## Day 6 — 01.05.2026
- pass by value: function gets a copy, original variable doesn't change
- to modify the original, you need pointers (later in step 24)
- header (.h) declares functions, source (.c) defines them
- header guard (#ifndef / #define / #endif) prevents double inclusion
- a .c + .h pair is called a module and standard in embedded projects
- multi-file compile: each .c becomes a .o, then linker combines them
- "undefined reference" error means the linker can't find the function

## Day 7 — 02.05.2026
- preprocessor runs before the compiler, processes lines starting with #
- #define is text replacement, no semicolon at the end
- #ifdef / #endif: code inside is compiled only if the macro is defined
- in production, comment out #define DEBUG to remove all debug prints from the binary
- no semicolon after #define and the preprocessor will replace literally

## Day 8 — 03.05.2026
- const makes a variable read-only and compiler throws an error if you try to change it
- difference from #define: const is type-checked and lives in memory, #define is just text replacement
- in embedded, const variables can be stored in flash instead of RAM, saving precious RAM space
- useful for big lookup tables that never change

## Day 9 — 04.05.2026
- recursion: a function calling itself, needs a base case to stop
- each call adds to the stack — too many calls cause stack overflow
- in embedded, recursion is avoided because stack is small (e.g. 4KB on STM32)
- always prefer for/while loop when possible
- never use recursion in interrupt handlers
- in hardware TODAY IS MY BIRTHDAY!

## Day 10 — 05.05.2026
- arrays hold multiple values of the same type under one name
- indexing starts at 0 — array[0] is the first element
- writing past the array (e.g. array[5] in a size-5 array) reads garbage, no error from C
- standard loop pattern: for (int i = 0; i < SIZE; i++)
- use #define SIZE instead of hardcoding the number — easier to change later

## Day 11 — 06.05.2026
- array elements are stored side by side in memory, no gaps
- & operator gives the address of a variable
- %p is the correct format specifier for addresses
- uint8_t array: each element is 1 byte apart
- uint32_t array: each element is 4 bytes apart
- this is the foundation of pointer arithmetic

## Day 12 — 07.05.2026
- in C, a string is just a char array ending with \0 (null terminator)
- char name[] = "Vahit" so compiler automatically adds \0 at the end
- sizeof("Vahit") = 6, not 5  because of the \0
- %s prints until \0, %c prints one character
- loop pattern: name[i] != '\0' and stops at null terminator without knowing array size
- in embedded, missing \0 means UART sends garbage or program crashes

## Day 13 - 08.05.2026 
- #include <string.h> needed for string functions
- strlen(s) : counts characters without \0
- strcpy(dst, src) : copies src into dst, dst must be large enough
- strcat(dst, src) : appends src to dst, remember to add space manually
- strcmp(s1, s2) : returns 0 if equal, never use == to compare strings
- buffer overflow risk: always make destination array large enough

## Day 14 - 09.05.2026
- 2D array: int matrix[rows][cols], access with matrix[row][col]
- in memory, stored row by row (row-major) also no gaps
- nested for loops to traverse: outer for rows, inner for columns
- printf("\n") after inner loop to move to next line
- embedded use: LED matrix, sensor data tables, image buffers

## Day 15 - 10.05.2026
- pointer is a variable that stores an address, not a value
- int *p means "p will hold the address of an int"
- & gives the address of a variable: &x
- * dereferences: *p means "go to that address and read/write the value"
- p and &x are the same and both are x's address
- *p and x are the same and both give 2026
- *p = 99 changes x without touching x directly
- %p for addresses, %d for values and never mix them

## Day 16 - 11.05.2026
- pass by reference: send the address of a variable to a function
- function parameter is int *p means take a pointer to int
- call with &x means "give the address of x"
- *p = 99 inside the function changes the original variable
- difference from pass by value: original changes, not a copy
- embedded use: return multiple values from one function using pointers