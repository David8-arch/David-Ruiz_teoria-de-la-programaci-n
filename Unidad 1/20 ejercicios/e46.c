#include <stdio.h>
#include <math.h>

int main(){
    float base = 0.0;
    float exponente = 0.0;
    float Potencia = 0.0;
    if (exponente > 0 && base != 0) {
        printf("Ingrese un numero:");
        scanf("%f", &base);

    printf("Ingrese el exponente que tiene:");
    scanf("%f", &exponente);

    Potencia = pow(base, exponente);

        printf("La potencia es igual a: %f", Potencia);
    } else {
        printf("Por favor, ingrese valores validos para la base y el exponente.");
    }

    return 0;
}