#include <stdio.h>

int main(){
    int ID = 0;
    int hora = 0;
    char dia_semanana = ' ';
    char administracion = 'A';
    char produccion = 'P';
    char ventas = 'V';
    char informatica = 'I';
    char Lunes = 'L';
    char martes = 'M';
    char miercoles = 'm';
    char jueves = 'J';
    char viernes = 'v';
    char departamento = ' ';
    int nivel1 = 1;
    int nivel2 = 2;
    int nivel3 = 2;
    int hora_entrada = 6;
    int hora_salida = 22;
    int nivel_admin = 3;
    int nivel_min_produccion = 2;

    printf("Ingrese su ID: ");
    scanf("%d", &ID);
    printf("Ingrese la hora (6-22): ");
    scanf("%d", &hora);
    printf("Ingrese el día de la semana (L/M/m/J/v): ");
    scanf(" %c", &dia_semanana);
    printf("Ingrese su departamento (A/P/V/I): ");
    scanf(" %c", &departamento);
    printf("Ingrese su nivel de acceso: ");
    scanf("%d", &nivel1);

    if(departamento == administracion && nivel1 >= nivel_admin && hora >= hora_entrada && hora <= hora_salida){
        printf("Acceso concedido al departamento de administración.\n");
    } else if(departamento == produccion && nivel1 >= nivel_min_produccion && hora >= hora_entrada && hora <= hora_salida){
        printf("Acceso concedido al departamento de producción.\n");
    } else if(departamento == ventas && nivel1 >= nivel_min_produccion && hora >= hora_entrada && hora <= hora_salida){
        printf("Acceso concedido al departamento de ventas.\n");
    } else if(departamento == informatica && nivel1 >= nivel_min_produccion && hora >= hora_entrada && hora <= hora_salida){
        printf("Acceso concedido al departamento de informática.\n");
    } else {
        printf("Acceso denegado. Por favor, verifique sus credenciales y horarios.\n");
    }
    return 0;
}