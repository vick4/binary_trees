#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - print pre-order traversal function
 *
 * @tree: pointer to the root node
 * @func: pointer to function to call for each node. The value in the node
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		;
	}

	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
