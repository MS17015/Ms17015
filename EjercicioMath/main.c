#include <stdio.h>
#include <math.h>

int main() {
    int tamanio;
    int i=0;
    int contador=0;

    double varianza,media,desviacion;
    int total=0;
    double suma,suma1;
    double suma2=0;

    printf("Ingrese el tamaño del vector");
    scanf("%d",&tamanio);
    int vector[tamanio];

    for(i=0;i<tamanio;i++){
        printf("Ingrese el numero :");
        scanf("%d",&vector[i] );
     contador=contador+1;
     total=total+vector[i];
    }
    media=(media+total)/contador;

    printf("Media : %f \n",media);
    for(i=0;i<tamanio;i++){
        suma=(vector[i]-media);
        suma1=pow(suma,2);
        suma2=suma2+suma1;
    }
    varianza = suma2 / tamanio;
    printf("Varianza : %f \n",varianza);

    desviacion=sqrt(varianza);
    printf("Desviacion estandar: %f \n" , desviacion);
    printf("Total de datos : %d \n",contador);

    return 0;
}