#include <stdio.h>

int main(void){

const int max = 50;

for (int i=1 ; i <= max ; i++){
    printf("%d\n",i);
}

//max = 90; 

printf("is const max realy changed? : %d\n",max);

}