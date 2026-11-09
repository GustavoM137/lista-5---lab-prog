#include <stdio.h>
#include <string.h>
#define TAM 15

char *ler_str(char *p, int tam);
int ler_char(char *p);

int main(){
    char str1[TAM];
    printf("Digite uma string (%d elementos):\n", TAM - 1);
    if (!(ler_str(str1, TAM))){
        puts("Programa encerrado");
        return 1;
    }

    printf("String: %s\n", str1);

    char caractere;
    puts("Digite qual caractere buscar:");
    if(ler_char(&caractere)) return 1;

    char *s1 = str1, contem = 0;
    while(*s1 != '\0' && !contem){
        if (*s1++ == caractere) contem = 1;
    }

    if (contem) printf("A string contém o caractere %c\n", caractere);
    else printf("A string não contém o caractere %c\n", caractere);

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

int ler_char(char *p){
    int s;
    s = scanf(" %c", p);
    if (s != 1){
        puts("Programa encerrado");
        return 1;
    }
    return 0;
}