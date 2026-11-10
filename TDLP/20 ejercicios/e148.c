#include <stdio.h>

int main(){
    float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0, nota4 = 0.0, nota5 = 0.0;
    float promedio = 0.0, suma = 0.0, mayor = 0.0, menor = 0.0;
    int divisor = 3;

    printf("Ingrese la primera nota: ");
    scanf("%f", &nota1);
    printf("Ingrese la segunda nota: ");
    scanf("%f", &nota2);
    printf("Ingrese la tercera nota: ");
    scanf("%f", &nota3);
    printf("Ingrese la cuarta nota: ");
    scanf("%f", &nota4);
    printf("Ingrese la quinta nota: ");
    scanf("%f", &nota5);

    mayor = nota1;
    menor = nota1;

    if (nota2 > mayor) {
        mayor = nota2;
    }
    if (nota2 < menor) {
        menor = nota2;
    }

    if (nota3 > mayor) {
        mayor = nota3;
    }
    if (nota3 < menor) {
        menor = nota3;
    }

    if (nota4 > mayor) {
        mayor = nota4;
    }
    if (nota4 < menor) {
        menor = nota4;
    }

    if (nota5 > mayor) {
        mayor = nota5;
    }
    if (nota5 < menor) {
        menor = nota5;
    }

    suma = nota1 + nota2 + nota3 + nota4 + nota5;
    promedio = (suma - mayor - menor) / divisor;

    printf("La nota mayor es: %.2f\n", mayor);
    printf("La nota menor es: %.2f\n", menor);
    printf("El promedio es: %.2f\n", promedio);
}