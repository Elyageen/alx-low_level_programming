#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars & initializes it with a specific char
 * @size: size of array
 * @c: char to initializh
 *
 * Return: pointer NULL if malloc fails
 */
char * create_array(unsigned int size, char c) {
    char * array;

    if (size == 0) {
        return NULL;
    }

    array = (char * ) malloc(size * sizeof(char));

    if (array == NULL) {
        return NULL;
    }

    {
        unsigned int i;
        for (i = 0; i < size; i++) {
            array[i] = c;
        }
    }

    return array;
}
