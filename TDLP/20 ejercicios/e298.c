#include <stdio.h>

int main(){
    float duracion = 0.0;
    char tipo_servicio = ' ';
    char reparacion = 'R';
    char instalacion = 'I';
    char mantenimiento = 'M';
    char urgencia = ' ';
    char normal = 'N';
    char urgente = 'U';
    char emergencia = 'E';
    float materiales = 0.0;
    char complejidad = ' ';
    char baja = 'B';
    char media = 'M';
    char alta = 'A';
    float Costo_hora = 25.0;
    float recargo_urgente = 1.5;
    float recargo_emergencia = 2.5;
    float factor_reparacion = 1.0;
    float factor_instalacion = 1.3;
    float factor_mantenimiento = 0.9;
    float costo_total = 0.0;

    printf("Ingrese la duracion del servicio en horas: ");
    scanf("%f", &duracion);
    printf("Ingrese el tipo de servicio (R/I/M): ");
    scanf(" %c", &tipo_servicio);
    printf("Ingrese la urgencia del servicio (N/U/E): ");
    scanf(" %c", &urgencia);
    printf("Ingrese el costo de los materiales: ");
    scanf("%f", &materiales);
    printf("Ingrese la complejidad del servicio (B/M/A): ");
    scanf(" %c", &complejidad);

    costo_total = duracion * Costo_hora + materiales;

    if(urgencia == urgente && tipo_servicio == reparacion){
        costo_total *= recargo_urgente * factor_reparacion;
    } else if(urgencia == urgente && tipo_servicio == instalacion){
        costo_total *= recargo_urgente * factor_instalacion;
    } else if(urgencia == urgente && tipo_servicio == mantenimiento){
        costo_total *= recargo_urgente * factor_mantenimiento;
    } else if(urgencia == emergencia && tipo_servicio == reparacion){
        costo_total *= recargo_emergencia * factor_reparacion;
    } else if(urgencia == emergencia && tipo_servicio == instalacion){
        costo_total *= recargo_emergencia * factor_instalacion;
    } else if(urgencia == emergencia && tipo_servicio == mantenimiento){
        costo_total *= recargo_emergencia * factor_mantenimiento;
    }

    printf("El costo total del servicio es: %.2f\n", costo_total);
    return 0;
}