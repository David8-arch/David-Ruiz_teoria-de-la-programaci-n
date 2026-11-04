#include <stdio.h>
#include <math.h>

int main(){
    float pies = 0.0;
    float pie_metros = 0.3048;
    float metros = 0.0;
    
    printf("Ingrese la altura en pies:");
    scanf("%f", &pies);

    metros = pies * pie_metros;
    if (metros > 0){
        printf("%.2f pies equivalen a %.2f metros", pies, metros);
    } else {
        printf("Por favor, ingrese una altura valida.");
    }
}