#include <stdio.h>

int main(){

int x = 2026;
int *p = &x;

printf("%d\n",x);
printf("%p\n",&x);
printf("%p\n",x);

printf("\n");

printf("%p\n",p);
printf("%d\n",*p);
printf("%p\n",&p);

*p = 99;
printf("%d\n", x);

return 0;

}