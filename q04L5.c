#include <stdio.h>
#define TAM 3

int main(){
    int vet1[TAM];
    float vet2[TAM];
    char vet3[TAM];
    double vet4[TAM];

    for (int i = 0; i < TAM; i++){
        printf("Digite os valores [%d]:\n", i);
        scanf("%d %f %c %lf", &vet1[i], &vet2[i], &vet3[i], &vet4[i]);
    }

    puts("Int:");
    for (int i = 0; i < TAM; i++){
        printf("[%p]: %d\n", (void *)&vet1[i], vet1[i]);
    }

    puts("Float:");
    for (int i = 0; i < TAM; i++){
        printf("[%p]: %.2f\n", (void *)&vet2[i], vet2[i]);
    }

    puts("Char:");
    for (int i = 0; i < TAM; i++){
        printf("[%p]: %c\n", (void *)&vet3[i], vet3[i]);
    }

    puts("Double:");
    for (int i = 0; i < TAM; i++){
        printf("[%p]: %.2f\n", (void *)&vet4[i], vet4[i]);
    }

    return 0;
}