#include <stdio.h>

int main(){
    float millas = 0.0;
    float kilometros = 0.0;
    float Millas_Km = 1.60934;

    if (kilometros > 0) {
        printf("Ingrese el numero de millas:");
        scanf("%f", &millas);

        kilometros = millas * Millas_Km;
    } else {
        printf("Por favor, ingrese una distancia valida en kilometros.");
    }

    printf("%.2f millas equivalen a %.3f KM", millas, kilometros);

    return 0;
}