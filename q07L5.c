#include <stdio.h>
#include <string.h>
#define TAM 15

char *ler_str(char *p, int tam);

int main(){
    char str1[TAM], str2[TAM];
    printf("Digite uma string (%d elementos):\n", TAM - 1);
    if (!(ler_str(str1, TAM))){
        puts("Programa encerrado");
        return 1;
    }
    printf("Digite outra string (%d elementos):\n", TAM - 1);
    if (!(ler_str(str2, TAM))){
        puts("Programa encerrado");
        return 1;
    }

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    char strc[2*TAM - 1];
    char *src = str1, *dst = strc;
    while(*src != '\0'){
        *dst++ = *src++;
    }
    src = str2;
    while((*dst++ = *src++) != '\0');

    printf("String concatenada: %s\n", strc);

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