#include <stdio.h>

void main(){
    float espacio_documentos, espacio_imagenes, espacio_videos, espacio_programas = 0.0; 
    float espacio_total, espacio_GB, espacio_total_disco, porcentaje_disco_usado = 0.0;
    float tamanio_documentos, tamanio_imagenes, tamanio_programas, tamanio_videos = 0.0;
    int cantidad_documentos, cantidad_imagenes, cantidad_programas, cantidad_videos = 0;

    printf("Ingrese el espacio total de su disco duro:");
    scanf("%f", &espacio_total_disco);

    printf("Ingrese la cantidad de documentos:");
    scanf("%d", &cantidad_documentos);

    printf("Ingrese el tamanio de los documentos en MB:");
    scanf("%f", &tamanio_documentos);

    printf("Ingrese la cantidad de imagenes:");
    scanf("%d", &cantidad_imagenes);

    printf("Ingrese el tamanio de las imagenes en MB:");
    scanf("%f", &tamanio_imagenes);

    printf("Ingrese la cantidad de videos:");
    scanf("%d", &cantidad_videos);

    printf("Ingrese el tamanio de los videos en MB:");
    scanf("%f", &tamanio_videos);

    printf("Ingrese la cantidad de programas:");
    scanf("%d", &cantidad_programas);

    printf("Ingrese el tamanio de los programas en MB:");
    scanf("%f", &tamanio_programas);

    espacio_documentos = cantidad_documentos * tamanio_documentos;
    espacio_imagenes = cantidad_imagenes * tamanio_imagenes;
    espacio_videos = cantidad_videos * tamanio_videos;
    espacio_programas = cantidad_programas * tamanio_programas;
    espacio_total = espacio_documentos + espacio_imagenes + espacio_programas + espacio_videos;
    espacio_GB = espacio_total / 1024;
    porcentaje_disco_usado = (espacio_GB / espacio_total_disco) * 100;
    
    printf("Los MB usados son: %.2f\n", espacio_total);
    printf("Los GB usados son: %.2f\n", espacio_GB);
    printf("El porcentaje usado del disco es: %.2f\n", porcentaje_disco_usado);

}