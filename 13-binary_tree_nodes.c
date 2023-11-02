#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: Number of nodes with at least 1 child in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* declare variable store */
	size_t l_nodes = 0; 
	size_t r_nodes = 0; 
	size_t nodes = 0;

	nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		nodes = 1;

	l_nodes = binary_tree_nodes(tree->left);
	r_nodes = binary_tree_nodes(tree->right);

	return (l_nodes + r_nodes + nodes);
}
