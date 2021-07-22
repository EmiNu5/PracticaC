// 9. Construye una función tal que dados dos vectores de 5 elementos cada uno, los concatene en un tercer un vector
// de 10 elementos.
// Ej: V1 = 2-56-7-8-30;
//  V2 = 7-80-2-4-13;
//  V3 = 2-56-7-8-30-7-80-2-4-13;
#include<stdlib.h>
#include<stdio.h>
void concatenar(int *ptr1, int *ptr2, int *ptr3,int dim);
void emitir_elementos(int arreglo3[], int d1);
int main(){
    int V1[5]={2,56,7,8,30};
    int V2[5]={7,80,2,4,13};
    int V3[10];
    int dimension = sizeof(V1)/sizeof(int);

    concatenar(V1,V2,V3, dimension);
    emitir_elementos(V3, dimension*2);
    system("Pause");
    return 0;
}
void concatenar(int *ptr1, int *ptr2, int *ptr3, int dim){
    int i, dimV3 = dim*2;

    for (i=0;i<dimV3;i++){
        if (i<dim){
            ptr3[i]= ptr1[i];
        }
        else{
            ptr3[i]=ptr2[i-dim];
        }
  
    }
}
void emitir_elementos(int arreglo3[], int d1){
int i;
for(i = 0; i < d1 ; i++)
    printf("v[%d]=%d \n", i, *(arreglo3+i));
}