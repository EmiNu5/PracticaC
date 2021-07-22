// Escribe una función que reciba un vector de enteros y su tamaño, y retorne la cantidad de números impares que
// contiene. Trabaja con notación de punteros y utiliza ciclo while.
// //cabecera de función:
// int impares (int * v, int tam);

#include<stdlib.h>
#include<stdio.h>

int contarImpares(int *a,int d1);

int main(){
    int num, d;
    d = 5;
    int arreglo[5]= {1,3,99,7,2};

    printf("La canitdad de numeros imapres es de %d\n",contarImpares(arreglo,d));
    system("Pause");
    return 0;
}
int contarImpares(int *a,int d1){
    int i,cont;
    cont=0;
    i=0;
    while(i<d1){
        if (a[i]%2==!0){
            printf("a[%d] = %d\n",i,a[i]);
            cont++;
        }

        i++;
    }

    return cont;
}
