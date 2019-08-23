#include <stdio.h>

int main() {
    int tamanio=0;
    int i=0;
    int contador=1;
    printf("Ingrese el tamaño del vector");
    scanf("%d",&tamanio);
    int vector[tamanio];
    int vcopia[tamanio];
    for(i=0;i<tamanio;i++){
       printf("Ingrese el numero :");
       scanf("%d",&vector[i] );
       vcopia[i]=vector[i];


    }
printf("Datos del Vector %d", contador);
    contador=contador+1;
    printf("\n");

    for(i=0;i<tamanio;i++){

printf("%d",vector[i]);
    }
    printf("\nDatos del Vector %d",contador);
    printf("\n");
    for(i=0;i<tamanio;i++){

        printf("%d",vcopia[i]);
    }
    return 0;
}