
/*Primeira questão C*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int nota, i;
    float soma = 0;
    float media;

    for (i = 1; i <= 3; i++) {
        printf("Informe a %dª nota: ", i);
        scanf("%d", &nota);

        if (nota > 6) {
            soma += nota * 5;
        } else {
            soma += nota * 2.5;
        }
    }

    media=soma/i;
    printf("A medoa ponderada é: %.2f\n", media);

    return 0;
}
