#include <stdio.h>

int main() {
    float C1 = 0.0, C2 = 0.0, C3 = 0.0;
    float NC = 0.0, NF = 0.0, NL = 0.0;
    bool aprobado = false;
    bool reprobado = false;
    printf("Ingrese la nota del primer certamen: ");
    scanf("%f", &C1);
    printf("Ingrese la nota del segundo certamen: ");
    scanf("%f", &C2);
    printf("Ingrese que nota considera para el tercer certamen: ");
    scanf("%f", &C3);

    NC = (C1 + C2 + C3)/3;
    NF = (NC * 0.7) + (NL * 0.3);

    if (NF >= 60) {
        aprobado = true;
    } else {
        printf("El estudiante no aprueba la asignatura con una nota final de %.2f\n", NF);
    }
    return 0;
}