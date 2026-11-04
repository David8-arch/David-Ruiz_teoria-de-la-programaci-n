#include <stdio.h>

int main(){
    float kg = 0, libras = 0;
    float factorl = 2.20462;

    printf("Ingrese el peso en kilogramos: ");
    scanf("%f", &kg);

    libras = kg * factorl;

    if(libras > 0){
        printf("%.2f kilogramos equivalen a %.2f libras", kg, libras);
    } else {
        printf("Por favor, ingrese un peso valido.");
    }
    return 0;
}