#include <stdio.h>

int main(){

struct DigitalInput {

    int channel_id;
    int value;
};

struct DigitalInput di_start;

di_start.channel_id = 0;
di_start.value = 1;

printf("Kanal: %d    Wert: %d \n",di_start.channel_id, di_start.value);


}