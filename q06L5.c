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
    printf("String: %s\n", str1);

    char *s1 = str1;
    char *s2 = str2;
    while((*s2++ = *s1++) != '\0');

    printf("String copiada: %s\n", str2);

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