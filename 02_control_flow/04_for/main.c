#include <stdint.h>
#include <stdio.h>

int main(void) {

for (uint8_t i=1 ; i <= 10 ; i++){
   if (i == 5){
    continue;

   }else if (i == 8){

    break;
   } else {
    printf("%d\n",i);
   }
}
 return 0;
}