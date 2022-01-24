/*

3. Faça um programa que solicite ao usuário a altura de 10 pessoas. Depois calcule a
média da altura e apresente na tela

*/

#include <stdio.h>

int main(){

    float altura, media;
    int i;

    for(i = 0; i < 10; i++){
        printf("Digite a altura do usuario %d: ", (i+1));
        scanf("%f", &altura);

        if(altura < 0){
            altura = -1 * altura;
        }

        if(i == 0){
            media = altura;
        }else{
            media = media + altura;
        }
    }

    media = media/10;

    printf("A media das alturas = %f\n", media);


return 0;
}
