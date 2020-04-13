/*
Codifique un programa que asigne un array de 
enteros (como arriba), luego lo libere, y 
entonces intente imprimir el valor de un 
elemento del array. 
¿El programa corre?, 
¿Que pasa cuando hace uso de ```valgrind```?
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *data = (int*)malloc(100*sizeof(int));
    free(data);
    printf("%i", data[5]);
    return 0;
}
