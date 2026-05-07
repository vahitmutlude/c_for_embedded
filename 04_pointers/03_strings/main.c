#include <stdio.h>

int main(){

char name[] = "Vahit";

printf("Mein name ist %s \n", name);
printf("Size of name: %d \n", sizeof(name));

for (int i = 0 ; name[i] != '\0' ; i++){

    printf("%c\n",name[i]);
}

}