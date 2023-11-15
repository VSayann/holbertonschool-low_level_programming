#include <stdlib.h>

/**
 * array_iterator - executes a function
 * 
 * @array: array
 * @action: pointer to the function
 * 
*/

void array_iterator(int *array, size_t size, void (*action)(int));