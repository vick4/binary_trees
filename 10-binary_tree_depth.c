#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the node, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* declare variable to store depth */
	size_t depth = 0;

	/* base case */
	if (!(tree && tree->parent)) 
	{
		return 0;
	}

	depth = binary_tree_depth(tree->parent);

	return (1 + depth);
}
