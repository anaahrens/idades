#include <stdio.h>
#include <stdlib.h>
void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int idade1, idade2, soma;
    char nome1[50], nome2[50];
    double media;

    printf("Digite o primeiro nome: \n");
    gets(nome1);
    printf("Digite a primeira idade: \n");
    scanf("%d", &idade1);
    printf("Digite o segundo nome: \n");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    printf("Digite a segunda idade: \n");
    scanf("%d", idade2);

    media = (double)(idade1 + idade2) / 2;

    printf("A idade media de %s e %s eh de %.1lf anos.\n", nome1, nome2, media);

    return 0;
}
