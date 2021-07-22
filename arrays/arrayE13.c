// 13. Aritmética de punteros. Investiga el siguiente programa y comenta que emite la última instrucción:
// int B[] = {3,4,1,2,7,12,-4};
// float f = 4.234, *ptf;
// *(B+3) = *B + 15;
// ptf = &f;
// *B = (int)(*ptf);
// f = *ptf + 20;
// *(B + 5) = (int)(*ptf); // que emite por pantalla B[], f, ptf?
#include<stdio.h>
#include<stdlib.h>
void funcion_imprimir_arreglo(int arregloX[], int dX);
int main(){
    int B[] = {3,4,1,2,7,12,-4};
    float f = 4.234;
    float *ptf; //generamos un puntero que apunta a un float.
    funcion_imprimir_arreglo(B,6);
    *(B+3) = *B + 15;//sumamos el valor 15 al valor guardado en el subindice 0 del arreglo, por lo tanto 15 + 3 = 18 y lo guardamos en el subindice 3 del arreglo, por lo que pisamos el valor 2 que encontraba por un 18.
    printf(" *(B+3) = *B + 15 es igual a: %d\n",*(B+3));
    ptf = &f; // guardamos la direccion de la variable f en el puntero ptf.
    *B = (int)(*ptf); // reemplazamos en el arreglo B subindice cero, el 3 por un 4, ya que casteamos el valor float 4.234 por un entero 4.
    printf("*B = (int)(*ptf) es igual a: %d\n",*B);

    f = *ptf + 20;
    printf("f = *ptf + 20, el nuevo valor de f es: %f\n",f); // sumamos el valor 20 a f que es floante 4.234 = 24.234.

    *(B + 5) = (int)(*ptf); // castea en entero el valor en guardado en *ptf ahora guardamos el valor 24 en el indice 5, quiere decir que reemplazamos el 24 por el 12.

    // que emite por pantalla B[], f, ptf?    
    funcion_imprimir_arreglo(B,6);
    printf("f = %f\n",f);
    printf("ptf = %d\n",ptf);
    
    
    system("Pause");
    return 0;


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