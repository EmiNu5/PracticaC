#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int recorrer(int *p,int tamanio);
int repeticiones(int *q,int len);
void invertir(int *r, int largo);

int main(){
    int i,minValor,aux,maxValor,repetido,numLeidos;
    int dimension[] = {4,2,3,4,14,14,7,5};
    int dim = sizeof(dimension)/sizeof(int);
    int sumaVector;
    float promedioValor;
    int econtrarNum;
    sumaVector = 0;
    minValor = 9999;
    maxValor = -9999;
    repetido =0;
    

    printf("a) El array dimesion contiene los valores: {");
    for (i=0;i<dim;i++){
        if (i<dim-1){
            printf("%d , ",dimension[i]);
        }
        else{
            printf("%d } ",dimension[i]);            
        }
        
    }
    printf("\n");

    for (i=0;i<dim;i++){

        sumaVector =  sumaVector + dimension[i];
    }
    printf("b) La suma de los elementos es igual a: %d\n",sumaVector); // parte B

    for(i=0;i<dim;i++){

        if (dimension[i]<minValor){
            minValor = dimension[i];
        }
        
    }
    printf("c) El valor minimo del elemento es: %d\n",minValor); //// parte C
    promedioValor = sumaVector/dim;
    printf("d) El valor promedio es: %.2f\n",promedioValor); /// parte D

    printf("e) Los valores que superan el premdio son: "); /// parte E
    for(i=0;i<dim;i++){
        if (dimension[i]>promedioValor){
 
            printf("%d ",dimension[i]);
        }
    }
    printf("\n");
    printf("f) ");
    for (i=0;i<dim;i++){  /// parte F
        if (dimension[dim-1]%dimension[i] == 0){
            printf("El valor %d es multiplo de %d \n",dimension[i],dimension[dim-1]);
        }
    }

    for(i=0;i<dim;i++){ // parte G

        if (dimension[i]>maxValor){
            maxValor = dimension[i];
        }
        
    }
    printf("g) El valor maximo es el %d, se encuentra en el indice ",maxValor);
    for (i=0;i<dim;i++){
        if (dimension[i] == maxValor){
            printf(" %d ", i);
            repetido++;
        }
    }
    printf("\n");
    printf("Cantidad de veces repetido: %d\n",repetido);


    printf("h) Los valores pares del arreglo son: {"); /// parte H
    for(i=0;i<dim;i++){
        if (i<dim){
            if (dimension[i]%2==0){
                printf("%d ",dimension[i]);
            }
        }
    }
    printf("}\n");

    printf("i) Los valores en posiciones impares son: \n");
    for (i=0;i<dim;i++){
        if (i%2==1){
            printf(" dimension[%d] valor %d\n",i,dimension[i]);
        }
    }
     printf("j) Los valores en posiciones pares son: \n");
    for (i=0;i<dim;i++){
        if (i%2==0){
            printf(" dimension[%d] valor %d\n",i,dimension[i]);
        }
    }
    printf(" leyo %d valores en el array antes de encontrarlo.\n",numLeidos = recorrer(dimension,dim));//parte K

    printf(", se reptite %d veces en el vector.\n",repeticiones(dimension,dim)); //parte l

    invertir(dimension,dim);
    printf("m) El vector invertido contiene los valores: {");
    for (i=0;i<dim;i++){
        if (i<dim-1){
            printf("%d , ",dimension[i]);
        }
        else{
            printf("%d } ",dimension[i]);            
        }
        
    }
    printf("\n");

    system("Pause");
    return 0;
}
int recorrer(int *p,int tamanio){
    int i,j, numBuscado;
    char flag;
    flag = 1;
    numBuscado=5;
    printf("El valor buscado es el 5 y ");
    for(i=0;i<tamanio;i++){
        if (numBuscado == p[i]){
            flag = 0;
            return i;
        }
    }
    if (flag==1){
        return 0;
    }
}
int repeticiones(int *q,int len){
    int cont,i,valorBuscado;
    i=0;
    cont=0;
    printf("El valor buscado en el vector es %d",valorBuscado = 14);
    
    while (i<len){
        if (q[i]==valorBuscado){
            cont++;
        }
        i++;
    }
    return cont;
}
void invertir(int *r, int largo){ // parte M
    int i, aux;
    
    printf("El vector dimesion contiene  los valores: {");
    for (i=0;i<largo;i++){
        if (i<largo-1){
            printf("%d , ",r[i]);
        }
        else{
            printf("%d } ",r[i]);            
        }
        
    }
    printf("\n");

    for(i=0;i<((largo)/2);i++){
        aux= r[largo-1-i];
        r[largo-1-i] = r[i];
        r[i]=aux;
    
    }
    
}