// Escribe un programa que imprima los elementos de un vector de enteros en orden inverso utilizando punteros (sin
// utilizar subíndices [ ] ). Pista: obtener la dirección del último elemento y recorrer en orden inverso.
// int v[10] = {1,2,3,4,5,6,7,8,9,10};
// int *p;

#include<stdlib.h>
#include<stdio.h>
void emitir_elementos(int v1[], int d1);
void orden_inverso(int v2[],int d2);

int main(){
    int i;
    int v[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p;
    printf("Emision del vector utilizando punteros\n") ;
    emitir_elementos(v,10);

    printf("\nEmision del vector en orden inverso utilizando punteros\n") ;
    orden_inverso(v,10);

    system("Pause");
    return 0;

}
void emitir_elementos(int v1[], int d1){
int i;
for(i = 0; i < d1 ; i++)
    printf("v[%d]=%d \n", i, *(v1+i));
}

void orden_inverso(int v2[],int d2){
    int i;
    for(i=d2-1;i>=0;i--){
        printf("[%d]=%d \n",i,*(v2+i));
    }
}