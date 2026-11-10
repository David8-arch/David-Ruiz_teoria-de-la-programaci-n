#include <stdio.h>

int main(){
    float farenheit = 0.0, kelvin = 0.0;
    float factor = 0.5556, offset_k = 273.15;

    printf("Ingrese la temperatura en Farenheit: ");
    scanf("%f", &farenheit);
    
    kelvin = (farenheit - 32) * factor + offset_k;

    if(kelvin >= 0){
        printf("La temperatura en Kelvin es: %.2f\n", kelvin);
    } else {
        printf("Por favor, ingrese una temperatura valida.");
    }
    return 0;
}