#include<stdlib.h>
#include<stdio.h>
int main(){
//Los punteros son variables que almacenan la direccion de otra variable

// Su declaracion tiene esta forma:
// tipo * identificador; //establece que identificador es una variable puntero a dato tipo.

// Si p se há declarado como puntero, entonces *p es el modo de referirse al contenido de la
// direccion almacenada en p. El operador * es el operador de ‘desreferencia’. 

// Desreferenciar una variable puntero es obtener el dato almacenado en la direccion contenida en
// el puntero.

// Cuando se declara
// int * p; se esta indicando que, a partir de la dirección que este contenida en p se deben tomar
// tantas celdas como corresponde a un entero, e interpretar el contenido segun la codificacion de
// enteros.

//Se puede conocer el tamano em bytes de la variable
//todos los punteros, tienen el mismo tamaño, ya que todas las direcciones de memoria miden lo mismo
//printf("%d\n",sizeof(float*));//=4
//printf("%d\n",sizeof(double*));//=4
//printf("%d\n",sizeof(char*));//=4

//Sumar una constante a un puntero:
// Si se tiene:
// int * p , a=5;
// p = &a;
// y se efectua
// p = p + 1;
// p avanzará la cantidad de celdas que corresponde al tamaño de un entero. Si p contenía 1000 y
// cada int utiliza 4 celdas, entonces p+1 vale 1004, p+2 vale 1008, y así sucesivamente.
int *p, a=5;
p=&a;
printf("%d\n",*p);//(*p) imprime el valor guardado en la direccion.
p=p+1;
printf("%d\n",p);//(p) anvanza 4 bytes que corresponde al tamaño de un puntero. 
p=p+1;
printf("%d\n",p);//(p) anvanza 4 bytes que corresponde al tamaño de un puntero. 
printf("\n\n");
////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
int v[3] = {10,20,30};
p = v;
(*p)++;
printf ("%d\n", *p);//Se incrementa en uno el valor de la variable a la cual apunta la variable puntero.
*(p++);
printf ("%d\n", *p);//incrementa en 4 bytes la dirección guardada,
                                     //perdiendo la dirección original para apuntar a otra.
                                    // El operador ++ actúa antes que *.
*p++; printf ("%d\n", *p);// idem anterior.
system("Pause");
return 0;
}


