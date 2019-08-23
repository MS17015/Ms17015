#include <stdio.h>

int main() {
    int tamanio=0;
    int i=0;
    int posicion;

    printf("Ingrese el tamaño del vector");
    scanf("%d",&tamanio);
    int vector[tamanio];

    for(i=0;i<tamanio;i++){
        printf("Ingrese el numero :");
        scanf("%d",&vector[i] );



    }
    printf("Datos del Vector :");

    printf("\n");

    for(i=0;i<tamanio;i++){

        printf("Posicion : %d dato : %d \n",i ,vector[i]);
    }
    printf("Indique la posicion del dato que desea eleminar");
    scanf("%d",&posicion);
    vector[posicion]=0;
    for(i=0;i<tamanio;i++){

        printf("Posicion : %d dato : %d \n",i ,vector[i]);
    }
    return 0;
}