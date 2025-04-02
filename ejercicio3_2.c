#include <stdio.h>

int main(){
    int filas = 4 

    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf ("\n");
    }
    return 0;
}