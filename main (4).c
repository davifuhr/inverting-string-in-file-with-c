#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *p;
    char str[50];
    p=fopen("teste1.txt","wt"); // abre arquivo

    printf("DAVI FELIPE FUHR\n4324\n");
    printf("Digite aqui a string que sera invertida no arquivo:\n");

    do{
        gets(str); // pega string e inverte
        for(int i=0; i<strlen(str)/2; i++){
            char c = str[i];
            str[i] = str[strlen(str)-1-i];
            str[strlen(str)-1-i] = c;
        }
        fputs(str,p); // bota a string no arquivo
        putc('\n',p);
        printf("A str invertida sera: %s\n", str);

    }while (str[0]!='\0');
    fclose(p); // fecha o arquivo
    puts("pressione qualquer tecla para finalizar\n");
    getch();
    return 0;
}
