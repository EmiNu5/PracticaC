// Dado un vector de dimensión N. Se debe pedir un valor x (float) y la posición i al usuario para almacenar x en la
// posición i de un vector. Los valores no se ingresan ordenados por posición. Se debe completar el tamaño del vector.
// Si la posición está ocupada se vuelve a pedir el ingreso. Al finalizar, emitir el contenido del vector indicando también
// la posición ocupada por cada número. Utiliza el ciclo while y funciones
#include<stdio.h>
#include<stdlib.h>
void setearVector(float *v1, int k);
void llenarVector(float *v,int m);

int main(){

    int i,n;
    float x;
    n=2;
    float vector[n];

    printf("dimension %d\n",n);


     setearVector(vector,n);
     llenarVector(vector,n);

    
    for(i=0;i<n;i++){
        printf("v[%d] vale %f\n",i,vector[i]);
    }
    system("Pause");
    return 0;
}
void setearVector(float *v1, int k){
    int i;
    for(i=0;i<k;i++){
    v1[i]='\0';
    }
}
void llenarVector(float *v,int m){
    int i,cont;
    float x;
    cont=0;
    while(cont<m){

        printf("Se pide un valor x:\n");
        scanf("%f",&x);
        fflush(stdin);
        printf("Se pide la posiscion i:\n");
        scanf("%d",&i);
        fflush(stdin);
        if (v[i]=='\0'){
            v[i] = x;
            cont++;
        }
        else{
            printf("El vector esta ocupado, vuelva a ingresar\n");
        }

    }
}


