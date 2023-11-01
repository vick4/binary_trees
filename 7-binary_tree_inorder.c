#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - a function to print Tree in order traversal
 *
 * @tree: Pointer to the root node
 * @func: Pointer to a function to call for each node.
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
