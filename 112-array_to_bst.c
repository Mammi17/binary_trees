#include "binary_trees.h"
#include <stdio.h>
/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: the number of elements in the array
 * Return: A pointer or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int a;
	bst_t *racine = NULL;

	for (a = 0; a < size; a++)
		bst_insert(&racine, array[a]);
	return (racine);
}
