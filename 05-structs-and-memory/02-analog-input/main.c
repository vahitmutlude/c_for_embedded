#include <stdio.h>

int main(){

struct AnalogInput{

int channel_id;
int raw_value;
float scaled_value;

};

struct AnalogInput test = {0, 13824, 0.0};

test.scaled_value = test.raw_value / 27648.0 * 100.0;

printf("kanal:%d  raw:%d  skaliert:%.1f", test.channel_id , test.raw_value, test.scaled_value);

}