#include <stdio.h>
#include "binary_trees.h"
/**
 * array_to_bst - build BST from an array
 * @array: array to convert to BST
 * @size: number of elements in array
 *
 * Return: pointer to root of BST; NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i;

	/* if there's no array */
	if (!array) {
		return NULL;
}

	/* iterate through array, inserting values to tree */
	for (i = 0; i < size; i++)
		bst_insert(&tree, array[i]);

	return (tree);
}
