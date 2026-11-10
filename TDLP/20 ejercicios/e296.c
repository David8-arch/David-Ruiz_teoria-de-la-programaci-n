#include <stdio.h>

int main() {
    float m_cuadrados = 0.0;
    int n_jardineros = 0;
    char tipo_trabajo = ' ';
    char frecuencia = ' ';
    char dificultad = ' ';
    char corte = 'C';
    char poda = 'P';
    char limpieza = 'L';
    char disenio = 'D';
    char unica = 'U';
    char mensual = 'M';
    char semanal = 'S';
    char baja = 'B';
    char media = 'm';
    char alta = 'A';
    float precio_m2_corte = 0.5;
    float precio_m2_poda = 1.0;
    float precio_m2_limpieza = 0.7;
    float precio_m2_disenio = 2.0;
    float desc_semanal = 0.10;
    float desc_mensual = 0.20;
    float Costo = 0.0, Costo_descs = 0.0, Costo_descm = 0.0;

    printf("Ingrese la cantidad de metros cuadrados a trabajar:\n");
    scanf(" %f", &m_cuadrados);

    printf("Ingrese el numero de jardineros:\n");
    scanf(" %d", &n_jardineros);

    printf("Ingrese el tipo de trabajo (C para corte, P para poda, L para limpieza, D para disenio):\n");
    scanf(" %s", &tipo_trabajo);

    printf("Ingrese la frecuencia del trabajo (U para unica, M para mensual, S para semanal):\n");
    scanf(" %s", &frecuencia);

    printf("Ingrese la dificultad del trabajo (B para baja, M para media, A para alta):\n");
    scanf(" %s", &dificultad);

    Costo = m_cuadrados * n_jardineros * (tipo_trabajo == corte ? precio_m2_corte : tipo_trabajo == poda ? precio_m2_poda : tipo_trabajo == limpieza ? precio_m2_limpieza : tipo_trabajo == disenio ? precio_m2_disenio : 0.0);

    if (frecuencia == semanal) {
        Costo_descs = Costo - (Costo * desc_semanal);
        printf("El costo con descuento semanal es: %.2f\n", Costo_descs);
    } else if (frecuencia == mensual) {
        Costo_descm = Costo - (Costo * desc_mensual);
        printf("El costo con descuento mensual es: %.2f\n", Costo_descm);
    } else {
        printf("El costo total del trabajo es: %.2f\n", Costo);
    }

}