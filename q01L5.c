#include <stdio.h>

int ler_int(int *p);

int main(){
    int a, b, soma;
    int *pa = &a, *pb = &b, *psoma = &soma;

    puts("Digite o primeiro valor:");
    if (ler_int(pa)) return 1;

    puts("Digite o segundo valor:");
    if (ler_int(pb))return 1;

    *psoma = *pa + *pb;
    printf("Soma[%p] = %d\n", (void *)psoma, *psoma);

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