#include <stdio.h>

int main(void) {
    int a = 42;
    char b = 'A';
    float c = 3.14;
    double d = 3.14159265;

    printf("int: %d\n",a);
    printf("char: %c\n",b);
    printf("float: %f\n",c);
    printf("double: %f\n",d);

    printf("int size: %zu byte\n",sizeof(a));
    printf("char size: %zu byte\n",sizeof(b));
    printf("float size: %zu byte\n",sizeof(c));
    printf("double size: %zu byte\n",sizeof(d));


}