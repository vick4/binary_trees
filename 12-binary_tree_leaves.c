#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: Number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* declare variable to store leaves */
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	/* base case */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
