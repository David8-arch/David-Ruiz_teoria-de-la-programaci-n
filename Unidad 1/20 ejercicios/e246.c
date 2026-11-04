#include <stdio.h>

int main (){
    float B = 0.0, b = 0.0, h = 0.0, area = 0.0;
    int divisor = 2;

    printf("Ingrese la base mayor: ");
    scanf("%f", &B);
    printf("Ingrese la base menor: ");
    scanf("%f", &b);
    printf("Ingrese la altura: ");
    scanf("%f", &h);

    if (B > b && h > 0) {
        area = ((B + b) * h) / divisor;
        printf("El area del trapecio es: %.2f", area);
    } else {
        printf("Ingrese valores validos.");
    }

    return 0;
}