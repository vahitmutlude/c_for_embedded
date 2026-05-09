#include <stdio.h>

int main(){

    int matrix[3][3] = {
        {11,12,13},
        {21,22,23},
        {31,32,33}
 
    };

    int sum = 0;

    for (int zeile = 0 ; zeile < 3 ; zeile ++){
        for (int spalte = 0 ; spalte <3 ; spalte++){
            printf("%d ",matrix[zeile][spalte]);
            sum = sum + matrix[zeile][spalte];
        }
        printf("\n");
    }
 printf("\nDie Summe von Matrix: %d",sum);

}