#include <stdio.h>
#include <string.h>

int main(void){
    char name[] = "Vahit";
    char surname[] = "Mutlu";
    char fullname[30];
    printf("length of name and surname : %d  %d\n",strlen(name), strlen(surname));

    strcpy(fullname, name);
    strcat(fullname, " ");
    strcat(fullname, surname);

    if (strcmp(name, surname) == 0){

        printf("They are same!\n");

    } else {
        printf("They are diffrent!\n");

    }

    printf("The Fullname = %s",fullname);




}