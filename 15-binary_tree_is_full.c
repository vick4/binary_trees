#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full, 0 if not or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* declare and initialize variables */
	int left_leaf = 0;
	int right_leaf = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_leaf = binary_tree_is_full(tree->left);
	right_leaf = binary_tree_is_full(tree->right);

	if (tree->left == NULL || tree->right == NULL)
	{
		return 1;
	}

	if (right_leaf == 1 && left_leaf == 1)
	{
		return 1;
	}

	return (0);
}
