#include <stdio.h>

int main(){
    int numero = 0;
    int multiplo = 5;
    bool es_multiplo_5 = true;
    bool esValido = false;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    es_multiplo_5 = (numero % multiplo == 0);

    if(es_multiplo_5 && es_multiplo_5 != 0){
        printf("El numero es multiplo de %d", multiplo);
    }else{
        printf("El numero no es multiplo de %d", multiplo);
    }
    return 0;
}