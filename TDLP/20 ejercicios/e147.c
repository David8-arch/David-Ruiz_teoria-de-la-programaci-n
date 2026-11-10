#include <stdio.h>
#include <math.h>

int main(){
    float numero = 0.0, cuadrado = 0.0;
    int exponente = 2;

    printf("Ingrese un numero para calcular su cuadrado: ");
    scanf("%f", &numero);

    cuadrado = pow(numero, exponente);

    if (cuadrado >= 0) {
        printf("El cuadrado de %.2f es %.2f", numero, cuadrado);
    } else {
        printf("Por favor, ingrese un numero valido.");
    }
    return 0;
}