#define LENGTH 100
#include <stdio.h>
#include <stdlib.h>
#include "../HeaderFiles/main.h"

int main(int argc, char const *argv[])
{
    int *array = (int *)malloc(LENGTH * sizeof(int));

    for (int i = 0; i < LENGTH; i++)
    {
        array[i] = rand() % 101;
    }

    printArray(array);
    printf("\n");
    triBubble(array);

    printArray(array);

    return 0;
}

void triBubble(int *array)
{
    int temp;
    for (int i = 0; i < LENGTH; i++)
    {
        for (int j = 0; j < LENGTH ; j++)
        {
            if (i != j)
            {
                if (array[i] < array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
    }
}

void printArray(int *array){
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%d ", array[i]);
    }
}