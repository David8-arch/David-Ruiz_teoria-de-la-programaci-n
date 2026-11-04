#include <stdio.h>

int main(){
    float horas = 0.0;
    char tipo_servicio = ' ';
    char reparacion = 'R';
    char instalacion = 'I';
    char mantenimiento = 'M';
    char emergencia = 'E';
    char complejidad = ' ';
    char bajo = 'B';
    char medio = 'M';
    char alto = 'A';
    float materiales = 0.0;
    char momento = ' ';
    char diurno = 'D';
    char nocturno = 'N';
    char fin_semana = 'F';
    float costo_hora = 30.0;
    float recargo_nocturno = 1.5;
    float recargo_fin_semana = 1.3;
    float recargo_emergencia = 2.0;
    float recargo_bajo = 1.0;
    float recargo_medio = 1.3;
    float recargo_alto = 1.8;
    float costo_total = 0.0;

    printf("Ingrese la cantidad de horas del servicio: ");  
    scanf("%f", &horas);
    printf("Ingrese el tipo de servicio (R/I/M/E): ");
    scanf(" %c", &tipo_servicio);
    printf("Ingrese la complejidad del servicio (B/M/A): ");
    scanf(" %c", &complejidad);
    printf("Ingrese el momento del servicio (D/N/F): ");
    scanf(" %c", &momento);
    printf("Ingrese el costo de los materiales: ");
    scanf("%f", &materiales);

    costo_total = horas * costo_hora + materiales;

    if(momento == nocturno && complejidad == bajo){
        costo_total *= recargo_nocturno * recargo_bajo;
    } else if(momento == nocturno && complejidad == medio){
        costo_total *= recargo_nocturno * recargo_medio;
    } else if(momento == nocturno && complejidad == alto){
        costo_total *= recargo_nocturno * recargo_alto;
    } else if(momento == fin_semana && complejidad == bajo){
        costo_total *= recargo_fin_semana * recargo_bajo;
    } else if(momento == fin_semana && complejidad == medio){
        costo_total *= recargo_fin_semana * recargo_medio;
    } else if(momento == fin_semana && complejidad == alto){
        costo_total *= recargo_fin_semana * recargo_alto;
    } else if(momento == emergencia && complejidad == bajo){
        costo_total *= recargo_emergencia * recargo_bajo;
    } else if(momento == emergencia && complejidad == medio){
        costo_total *= recargo_emergencia * recargo_medio;
    } else if(momento == emergencia && complejidad == alto){
        costo_total *= recargo_emergencia * recargo_alto;
    }
    printf("El costo total del servicio es: $%.2f\n", costo_total);
    return 0;
}