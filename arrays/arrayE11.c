// 11. Se ingresan los N y M elementos de los arreglos unidimensionales A y B, respectivamente. La computadora emite la
// unión de ambos, su diferencia y su intersección.
#include<stdio.h>
#include<stdlib.h>
void funcion_union(int vA[],int vB[], int dimA,int dimB);
void funcion_interseccion(int aA[],int aB[],int dimA,int dimB);
void funcion_ordenar(int v[], int d);
void funcion_imprimir_arreglo(int arregloX[], int dX);
void funcion_quitar_duplicados(int vU[],int dT);

int main(){
   int A[3] ={3,2,1};
   int B[4] ={4,3,6,1}; 
   int dA=sizeof(A)/sizeof(int), dB = sizeof(B)/sizeof(int);

   funcion_union(A,B, dA,dB);
   funcion_interseccion(A,B,dA,dB);
   system("Pause");
   return 0;
}
void funcion_interseccion(int aA[],int aB[],int dimA,int dimB){
    int i,j, cont;
    int dimI = dimA+dimB;
    int arregloI[dimI];
    cont = 0;
    printf("Funcion Interseccion:\n");
    
    for(i=0;i<dimA;i++){
        for(j=0;j<dimB;j++){
           // printf("%d == %d\n",aA[i],aB[j]);
            if (aA[i] == aB[j]){
                arregloI[cont] = aB[j];
               // printf("%d es igual a %d y cont es igual a %d\n", arregloI[cont],aB[j],cont);
                cont++;

            }
        }
    }
    funcion_ordenar(arregloI,cont);
    funcion_imprimir_arreglo(arregloI, cont);
}

void funcion_union(int vA[],int vB[], int dimA,int dimB){
    int i,x,j;
    int dimT = dimA + dimB;
    int arregloU[dimT];
    printf("Funcion Union:\n");

    for(i=0;i<dimA;i++){  //incluyo los valores del arreglo A en el arregloU
        arregloU[i] = vA[i];
    }
    //x=0;                    // incluyo los valores del arreglo B en el arregloU
    for(i=dimA;i<dimT;i++){
        arregloU[i]=vB[i-dimA];
        //arregloU[i]=vB[x++]; // otra forma de agregar valores al arreglo.

    }
    
    funcion_ordenar(arregloU,dimT); // ordeno los elementos del arregloU
    funcion_quitar_duplicados(arregloU,dimT); // 

}
void funcion_ordenar(int v[], int d){
    int i,j, aux, ordenado;

    for (i = 0; i < d-1; i++){
        ordenado = 0;// por defecto cero seria verdadero.
        for (j = 0; j < d-(i+1); j++){
            if (v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
                ordenado = 1;
            }
        }
        if (ordenado == 0){
            break;
        }
    }

}
void funcion_quitar_duplicados(int vU[],int dT){
    int len = dT;
    int i;
    int j;
    int k;
    int c[j];
    j=0;
    for(i=0;i<len-1;i++){
        if(vU[i] != vU[i+1]){
            vU[j++] =  vU[i];  
        }
    }
    vU[j++] = vU[len-1];
    for(k=0;k<j;k++){
       c[k] =  vU[k];  
    } 
    funcion_imprimir_arreglo(c, j);
}
void funcion_imprimir_arreglo(int arregloX[], int dX){
    int i;
    for(i = 0; i < dX ; i++){
    printf("v[%d]=%d \n", i, *(arregloX+i)); // otra forma sin usar punteros es con indice arregloX[i]
    }
}