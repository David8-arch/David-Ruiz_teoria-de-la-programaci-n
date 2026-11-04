#include <stdio.h>

int main(){
    float ladoe = 0.0, perimetro = 0.0;
    int multiplicador = 3;

    printf("Ingrese el valor del lado del triangulo: ");
    scanf("%f", &ladoe);

    if(ladoe > 0){
        perimetro = ladoe * multiplicador;
        printf("El perimetro del triangulo equilatero es: %.2f", perimetro);
    } else {
        printf("Por favor, ingrese un valor valido.");
    }
    return 0;
}