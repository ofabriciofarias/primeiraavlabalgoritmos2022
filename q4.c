/*

4. Faça um programa que solicite a idade de um jogador de futebol. Depois, classifiqueo de acordo com sua categoria para treino:
Infantil A = 5 - 7 anos
Infantil B = 8-10 anos
Juvenil A = 11-13 anos
Juvenil B = 14-17 anos
Adulto = maiores de 18 anos
Ao final, apresente na tela qual categoria o aluno pertence.

*/

#include <stdio.h>

int main(){

    int idade;

    printf("Digite a idade do jogador: ");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7){
        printf("Infantil A\n");
    }else if(idade >= 8 && idade <= 10){
        printf("Infantil B\n");
    }else if(idade >= 11 && idade <= 13){
        printf("Juvenil A\n");
    }else if(idade >= 14 && idade <= 17){
        printf("Juvenil B\n");
    }else if(idade >= 17){
        printf("Adulto\n");
    }else{
        printf("O jogador nao se adequa a nenhuma das categorias\n");
    }

 return 0;
}
