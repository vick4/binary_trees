#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - a function to check if node is root of a binary tree
 *
 * @node: a pointer to node to check
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent != NULL)
		return (0);

	return (1);
}
