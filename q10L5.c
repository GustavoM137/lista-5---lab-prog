#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define N 10

int main(){
    int X[TAM], F[N] = {0};

    srand(time(NULL));
    puts("Vetor X:");
    for (int i = 0; i < TAM; i++){
        *(X + i) = rand() % N;
        printf("[%d] ", *(X + i));
    }
    putchar('\n');

    for (int i = 0; i < TAM; i++){
        (*(F + *(X + i)))++;
    }

    puts("Vetor F:");
    for (int i = 0; i < N; i++){
        printf("[%d] ", *(F + i));
    }
    putchar('\n');

    return 0;
}