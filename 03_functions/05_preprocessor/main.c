#include <stdio.h>

int main(void){

#define MAX 10
//#define DEBUG

for (int i=1 ; i <= MAX ; i++){
    printf("%d\n",i);
}


#ifdef DEBUG   
    printf("Debug mode active!");
#endif    

}