#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define N 7

int main(){
    int X[TAM], Y[TAM], M[N][N] = {0};

    srand(time(NULL));
    puts("Vetor X:");
    for (int i = 0; i < TAM; i++){
        X[i] = rand() % N;
        printf("[%d] ", X[i]);
    }
    putchar('\n');

    puts("Vetor Y:");
    for (int i = 0; i < TAM; i++){
        int r = 1 + rand() % 10;

        int add;
        if (r == 10) add = 2;
        else if (r > 7) add = -2;
        else if (r > 5) add = 1;
        else if (r > 3) add = -1;
        else add = 0;

        Y[i] = X[i] + add;
        if (Y[i] < 0) Y[i] = 0;
        else if (Y[i] >= N) Y[i] = N - 1;

        printf("[%d] ", Y[i]);
    }
    putchar('\n');

    for (int i = 0; i < TAM; i++){
        M[Y[i]][X[i]]++;
    }

    putchar('\n');
    puts("Matriz M:");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("[%d] ", M[i][j]);
        }
        putchar('\n');
    }

    return 0;
}