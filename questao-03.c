#include <stdio.h>
void main()
/*Fa�a um programa para ler um vetor de 10 n�meros inteiros, como tamb�m, ler um
n�mero inteiro x. A seguir, o programa deve calcular e mostrar quantas vezes o
n�mero x aparece no vetor.*/
{
    int i, x, vetor[10], aparece;

    aparece = 0;
    printf("Informe os valores do vetor.\n");

    for (i=0; i<10; i++){
        scanf("%d", &vetor[i]);
    }
    printf("\nInforme um numero inteiro qualquer: ");
    scanf("%d", &x);

    for (i=0; i<10; i++){
        if (vetor[i] == x){
            aparece++;
        }
    }

    printf("\nO numero %d aparece %d vezes.", x, aparece);

}
