#include <stdio.h>

int main(){

int x = 42;
int *p = &x;
int **pp = &p;

printf("%d\n",x);
printf("%p\n",p);
printf("%d\n",*p);
printf("%p\n",pp);
printf("%p\n",*pp);
printf("%d\n",**pp);




}

