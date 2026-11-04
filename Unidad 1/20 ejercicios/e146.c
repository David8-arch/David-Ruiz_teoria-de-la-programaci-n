#include <stdio.h>

int main() {
    float peso = 0.0, altura = 0.0, IMC = 0.0;
    float bajo = 18.5, normal = 24.9, alto = 29.9;

    printf("¿Cuantos kilos pesa usted?: ");
    scanf("%f", &peso);

    printf("¿Cuantos metros mide usted?: ");
    scanf("%f", &altura);

    if (peso <= 0 || altura <= 0) {
        printf("Por favor, ingrese valores validos para peso y altura.");
        return 1;
    } else {
        IMC = peso / (altura * altura);
    }

    if(IMC < bajo) {
        printf("Su IMC es %.2f, es bajo.", IMC);
    } else if(IMC >= bajo && IMC <= normal) {
        printf("Su IMC es %.2f, es normal.", IMC);
    } else if(IMC > normal && IMC <= alto) {
        printf("Su IMC es %.2f, usted tiene sobrepeso.", IMC);
    } else if(IMC > alto) {
        printf("Su IMC es %.2f, usted tiene obesidad.", IMC);
    }
    return 0;
}