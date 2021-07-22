// 6. Escribe una función que retorne un puntero al máximo valor de un vector de “doubles”. Si el vector está vacío debe
// retornar NULL.
// //cabecera de función:
// double * max (double * v, int tam);
#include<stdlib.h>
#include<stdio.h>


double *max (double * v, int tam); //decl. una func. que dev. un punt. a tipo
int main(){

    int i,d;
    double arreglo[2];
    d=sizeof(arreglo)/sizeof(double);
    printf("El maximo valor del arreglo es: %lf \n",*max(arreglo,d));

    system("Pause");
    return 0;
}
double *max(double *v, int tam){
    int i,subindice;
    double maximo;
    maximo=-999;
    
    for(i=0;i<tam;i++){;
        if(v[i]>maximo){

            subindice=i;
            maximo=v[i];
        }
    }
    printf("%lf\n",*(v+subindice));

    return (v+subindice);
}