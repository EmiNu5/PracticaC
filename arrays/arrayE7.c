// 7. Dadas las siguientes declaraciones:
// int v[3] = {10,20,30};
// int *p;
// p = v;
// Explica que imprimiría el printf en cada caso de los siguientes:
// a) (*p)++; printf (“%d”, *p);
// b) *(p++); printf (“%d”, *p);
// c) *p++; printf (“%d”, *p);

#include<stdio.h>
#include<stdlib.h>

int main(){
    int v[3] = {10,20,30};
    int *p;
    p = v;
    /*a)*/ (*p)++; printf ("%d\n", *p);//Se incrementa
                                      // el valor de la variable a la cual apunta la variable puntero.

    /*b)*/ *(p++); printf ("%d\n", *p);//incrementa en 4 bytes la dirección guardada,
                                     //perdiendo la dirección original para apuntar a otra.
                                    // El operador ++ actúa antes que *.
    /*c)*/ *p++; printf ("%d\n", *p);// idem anterior.


    system("Pause");
    return 0;
}