#include <stdio.h>

int main(){
    char especialidad = ' ';
    char tipo_paciente = ' ';
    int edad = 0;
    char dia = ' ';
    char general = 'G';
    char pediatria = 'P';
    char cardiologia = 'C';
    char neurologia = 'N';
    char nuevo = 'N';
    char recurrente = 'R';
    char urgente = 'U';
    int duracion_nuevo = 60;
    int duracion_recurrente = 30;
    int duracion_urgente = 15;
    int espera_maxima = 7;

    printf("Ingrese la especialidad que necesita (G/P/C/N): ");
    scanf(" %c", &especialidad);
    printf("Ingrese el tipo de paciente que es considerado(N/R/U): ");
    scanf(" %c", &tipo_paciente);
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Ingrese el dia de la semana para la cita (L/M/m/J/v): ");
    scanf(" %c", &dia);

    if(tipo_paciente == nuevo){
        printf("Su tiempo estimado de espera es de %d minutos.\n", duracion_nuevo);
    } else if(tipo_paciente == recurrente){
        printf("Su tiempo estimado de espera es de %d minutos.\n", duracion_recurrente);
    } else if(tipo_paciente == urgente){
        printf("Su tiempo estimado de espera es de %d minutos.\n", duracion_urgente);
    }

    printf("Cada turno podra tener un maximo de %d minutos adicionales de espera.\n", espera_maxima);
    return 0;
}