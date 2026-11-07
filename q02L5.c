#include <stdio.h>

int ler_int(int *p);

int main(){
    int a, b;
    int *pa = &a, *pb = &b;

    puts("Digite o primeiro valor:");
    if (ler_int(pa)) return 1;

    puts("Digite o segundo valor:");
    if (ler_int(pb)) return 1;

    puts("Antes:");
    printf("A[%p] = %d\n", (void *)pa, *pa);
    printf("B[%p] = %d\n", (void *)pb, *pb);

    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    puts("Depois:");
    printf("A[%p] = %d\n", (void *)pa, *pa);
    printf("B[%p] = %d\n", (void *)pb, *pb);

    return 0;
}

int ler_int(int *p){
    int s;
    while((s = scanf("%d", p)) != 1){
        if (s == EOF){
            puts("Programa encerrado");
            return 1;
        }

        puts("Entrada inválida, digite novamente:");
        int c;
        while((c = getchar()) != '\n' && c != EOF);
    }
    return 0;
}