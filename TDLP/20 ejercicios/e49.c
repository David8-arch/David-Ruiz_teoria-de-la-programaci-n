#include <stdio.h>

int main(){
    int edad_humana = 0, edad_perruna = 0;
    int factor_canino = 7;
    
    printf("Ingrese la edad humana del perro:");
    scanf("%d", &edad_humana);

    if (edad_humana > 0) {
        edad_perruna = edad_humana * factor_canino;
        printf("%d anios humanos equivalen a %d anios de perro", edad_humana, edad_perruna);
    } else {
        printf("Por favor, ingrese una edad valida.");
    }

    return 0;
}