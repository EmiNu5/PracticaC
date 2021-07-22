//Emitir 2 vectores intercalados
#include<stdlib.h>
#include<stdio.h>
void imprimir_arreglo(int arregloX[], int dX);
void intercalar_arreglo(int *ptr1,int *ptr2,int *ptr4,int d1);
int main(){
    int V1[5]={2,56,7,8,30};
    int V2[5]={7,80,2,4,13};
    int V4[10];
    int dimension = sizeof(V1)/sizeof(int);

    intercalar_arreglo(V1,V2,V4,dimension);
    imprimir_arreglo(V4,dimension*2);

    system("Pause");
    return 0;
}
void intercalar_arreglo(int *ptr1,int *ptr2,int *ptr4,int d1){
    int i, j;
    i=0;
    for(j=0;j<d1;j++){
        ptr4[i] =ptr1[j];
        ptr4[i+1]=ptr2[j];
        i=i+2;
    }

}
void imprimir_arreglo(int arregloX[], int dX){
int i;
for(i = 0; i < dX ; i++)
    printf("v[%d]=%d \n", i, *(arregloX+i)); // otra forma sin usar punteros es con indice arregloX[i]
}