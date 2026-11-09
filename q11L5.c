#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define N 7

int main(){
    int X[TAM], Y[TAM], M[N][N] = {0};

    srand(time(NULL));
    for (int i = 0; i < TAM; i++){
        *(X + i) = rand() % N;
        *(Y + i) = rand() % N;
    }

    puts("Vetor X:");
    for (int i = 0; i < TAM; i++){
        printf("[%d] ", *(X + i));
    }
    putchar('\n');

    puts("Vetor Y:");
    for (int i = 0; i < TAM; i++){
        printf("[%d] ", *(Y + i));
    }
    putchar('\n');

    for (int i = 0; i < TAM; i++){
        M[Y[i]][X[i]]++;
    }

    putchar('\n');
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("[%d] ", M[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');

    return 0;
}