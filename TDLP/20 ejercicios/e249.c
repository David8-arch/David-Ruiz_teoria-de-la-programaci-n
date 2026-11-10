#include <stdio.h>

int main(){
    int n = 0;
    int d1 = 7;
    int d2 = 11;
    bool es_multiplo_7_11 = true;
    bool esValido = false;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if(n % d1 == 0 && n % d2 == 0){
        es_multiplo_7_11 = true;
        printf("El numero es multiplo de %d y %d", d1, d2);
    } else {
        es_multiplo_7_11 = false;
        printf("El numero no es multiplo de %d y %d", d1, d2);
    }
    return 0;
}