// 12. Para probar un congelador, la fábrica registra en un listado, la temperatura en el interior durante todos los días del
// mes de junio. Escribe una función que reciba un vector con todas estas temperaturas (generalmente, negativas) y
// devuelva la mínima temperatura. Luego escribe una segunda función que diga en qué día del mes se produjo la
// temperatura mínima. 
#include<stdio.h>
#include<stdlib.h>
#include <time.h> 
void carga_vector(int *temp, int d);
void funcion_imprimir_arreglo(int arregloX[], int dX);
void minimo_vector(int arregloM[],int dim);
int main(){

    int temperaturas[30];
    int dias = sizeof(temperaturas)/sizeof(int);
    carga_vector(temperaturas,dias);
    funcion_imprimir_arreglo(temperaturas,dias);
    minimo_vector(temperaturas,dias);

    system("Pause");
    return 0;
}
void carga_vector(int *temp, int d){
    int i;
    srand(time( NULL ) );
    for(i = 0; i < d ; i++){
       temp[i] = -1 - ( rand() % 80 );
    }
}
void funcion_imprimir_arreglo(int arregloX[], int dX){
    int i;
    printf("{");
    for(i = 0; i < dX ; i++){
        if(i!= dX-1){
            printf(" %d,", *(arregloX+i)); // otra forma sin usar punteros es con indice arregloX[i]
        }
        else{
            printf("%d } \n",*(arregloX+i)); // otra forma sin usar punteros es con indice arregloX[i]            
        }

    }
}
void minimo_vector(int arregloM[],int dim){
    int i,min, diaMin;
    min = 50;
    diaMin = 0;

    for(i=0;i<dim;i++){
        if(arregloM[i]<min){
            min = arregloM[i];
            diaMin = i;
        }
    }
    printf("La temparatura minima fue de %d grados, registrada el %d de junio\n",min,diaMin+1);
}