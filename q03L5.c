#include <stdio.h>

int ler_int(int *p);

int main(){
    int n, m;
    int *num = &n, *menor = &m;

    puts("Digite -1 para encerrar");
    puts("Digite um número:");
    if (ler_int(menor)) return 1;
    if (*menor == -1){
        puts("Nenhum valor fornecido");
        return 0;
    }
    printf("Menor valor fornecido: %d\n", *menor);
    
    while(1){
        puts("Digite um número:");
        if (ler_int(num)) return 1;

        if (*num == -1) return 0;
        
        if (*num < *menor) *menor = *num;
        printf("Menor valor fornecido: %d\n", *menor);
    }
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