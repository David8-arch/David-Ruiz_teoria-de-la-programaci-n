#include <stdio.h>

int main(){
    float hPa = 0.0, mmHg = 0.0;
    float factor = 0.750062;

    printf("Ingrese la presion en hPa: ");
    scanf("%f", &hPa);

    mmHg = hPa * factor;

    if(mmHg >= 0){
        printf("%.2f hectopascales equivalen a %.2f mmHg\n", hPa, mmHg);
    } else {
        printf("Por favor, ingrese valores validos.");
    }
    return 0;
}