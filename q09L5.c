#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define BASE (-256)
#define LIM 255

int main(){
    int vet[TAM];

    srand(time(NULL));
    for (int i = 0; i < TAM; i++){
        *(vet + i) = BASE + rand() % (LIM - BASE + 1);
        printf("[%d] ", *(vet + i));
    }
    putchar('\n');

    for (int i = 1; i < TAM; i++){
        char flag = 1;
        for (int j = 0; j < TAM - i; j++){
            if (*(vet + j) > *(vet + j + 1)){
                int temp = *(vet + j);
                *(vet + j + 1) = *(vet + j);
                *(vet + j) = temp;
                flag = 0;
            }
        }
        if (flag) break;
    }

    puts("Vetor ordenado:");
    for (int i = 0; i < TAM; i++){
        printf("[%d] ", *(vet + i));
    }
    putchar('\n');

    return 0;
}