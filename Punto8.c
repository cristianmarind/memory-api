/*
Intente usar alguna de las otras interfaces para asignacion de memoria. 
Por ejemplo, cree una estructura de datos simple similar a un vector y 
que use rutinas que usen realloc para manejar el vector. Use un array 
para almacenar los elementos del vector; cuando un usuario agregue una 
entrada al vector, use realloc para asignar un espacio mas a este. 
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *length;
    int *data;
} array;

void addElement(array arr, int newValue);

int main() {
    int nums [4] = {2, 5, 6, 9};
    array x = {
        (int*)malloc(sizeof(int)),
        (int*)malloc(0*sizeof(int))
    };
    printf("-----------Vector estatico inicial-----------\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%i \n", nums[i]);
    }
    printf("-----------Construccion de la nueva estructura-----------\n");
    printf("Size array= %i \n\n", x.length[0]);
    for (int i = 0; i < 4; i++)
    {
        printf("Agregando: %i \n", nums[i]);
        addElement(x, nums[i]);
        printf("Size array= %i \n\n", x.length[0]);
    }
    printf("-----------Nueva estructura dinamica-----------\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%i \n", x.data[i]);
    }
    return 0;
}

void addElement(array arr, int newValue){
    arr.data = (int*)realloc(arr.data, sizeof(arr.data) + sizeof(int));
    arr.data[*arr.length] = newValue;
    arr.length[0]++;
}