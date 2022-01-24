/*
1. Faça um programa que solicite ao usuário as notas da primeira, segunda e terceira
avaliação. Depois, calcule a média aritmética e apresente o resultado final ao usuário.
Importante: Se o usuário digitar uma nota das notas com valor negativo ou maior que
10, o programa deve apresentar uma mensagem de erro informando ao usuário e também
não deve realizar o cálculo da média.
*/

#include <stdio.h>

int main(){

    float n1, n2, n3, media;

    printf("Digite os valores das notas 1, 2 e 3: \n");
    scanf("%f%f%f", &n1, &n2, &n3);

    //Forma compacta de solução do problema
    if(n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10){
        printf("Erro, valor invalido para calculo da media\n");
    }else{
        media = (n1 + n2 + n3)/3;
        printf("O resultado da media = %.2f\n", media);
    }
return 0;
}
