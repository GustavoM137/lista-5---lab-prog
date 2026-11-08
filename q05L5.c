#include <stdio.h>
#include <string.h>
#define TAM 15

char *ler_str(char *p, int tam);

int main(){
    char str[TAM];
    printf("Digite uma string (%d elementos):\n", TAM - 1);
    if (!ler_str(str, TAM)){
        puts("Programa encerrado");
        return 1;
    }

    unsigned char count = 0;
    while (*(str + count) != '\0') count++;

    printf("String: %s\nTamanho: %hhu\n", str, count);

    return 0;
}

char *ler_str(char *p, int tam){
    if(!(fgets(p, tam, stdin))) return NULL;
    size_t pos = strcspn(p, "\n");
    if (p[pos] == '\0'){
        int c;
        while((c = getchar()) != '\n' && c != EOF);
    }
    else p[pos] = '\0';
    
    return p;
}