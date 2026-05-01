#include <stdio.h>

void change(int a){
    a = a + 100;
    printf("in change : %d\n", a);
}

int main(void){
    int x = 7;
    printf("before change : %d\n",x);
    change(x);
    printf("after change : %d\n",x);
    
}