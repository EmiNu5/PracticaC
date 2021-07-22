#include <stdio.h>
#include<stdlib.h>
int main(){
int x[3], *puntero;
x[0]=10;
x[1]=20;
x[2]=30;
puntero = x;
printf("%p\n",puntero);// emite la direccion del arreglo.
puntero = &x[0];
printf("%p\n",puntero); // idem anterior.
printf("%d\n\n",puntero[0]);// imprime el valor 10.
printf("%d\n\n",*puntero);// imprime el valor 10.
printf("%X\n\n",&puntero); // imprime la direccion en HEXADECIMAL mayuscula.
printf("%X\n\n",&puntero[1]);//imprime la direccion del 2do indice en HEXADECIMAL mayuscula.
printf("%d\n\n",puntero[1]);// imprime el valor 20.
printf("%d\n",*(puntero+1));// imprime el valor 20.
printf("%d\n",*(puntero+2));// imprime el valor 30. 
system("Pause");
return 0;
}
