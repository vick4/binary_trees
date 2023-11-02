#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 if not or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_h = 0;
	int right_h = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_h = binary_tree_is_perfect(tree->left);
	right_h = binary_tree_is_perfect(tree->right);

	if (tree->parent == NULL)
	{
		if (left_h < 0 || right_h < 0) {
			return 0;
	}

		return 1;
	}

	if (left_h != right_h)
		return (-1);

	return (left_h + 1);
}
