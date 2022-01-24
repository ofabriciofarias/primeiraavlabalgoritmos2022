/*
2. Faça um programa que receba 10 valores inteiros digitados pelo usuário. Depois,
apresente na tela a soma dos valores, assim como, o menor e maior valor digitado.
*/

#include <stdio.h>

int main(){

    int valor, soma, menor, maior, i;

    for(i = 0; i < 10; i++){
        printf("Digite o valor %d\n", (i+1));
        scanf("%d", &valor);

        if(i == 0){
            soma = valor;
            menor = valor;
            maior = valor;
        }else{

            soma = soma + valor;

            if(menor > valor){
                menor = valor;
            }

            if(maior < valor){
                maior = valor;
            }
       }
    } //Fim do laço

    printf("O resultado da soma = %d\n", soma);
    printf("O menor valor digitado = %d\n", menor);
    printf("O maior valor digitado = %d\n", maior);


return 0;
}
