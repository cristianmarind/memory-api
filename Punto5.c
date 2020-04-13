/*
Escriba un programa que cree un array de enteros
llamado data de un tamaño de 100 usando malloc; 
entonces, lleve el data[100] a 0. ¿Qué pasa cuando 
este programa se ejecuta?, ¿Qué pasa cuando se corre 
el programa usando valgrind?, ¿El programa es correcto?
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *data = (int*)malloc(100*sizeof(int));
    data[100] = 0;
    return 0;
}
