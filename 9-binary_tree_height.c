#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 *
 *  @tree: Pointer to the node to measures the height
 *
 * Return: The height of the tree starting at @node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		/*recursively check the heights of the left and right node if exist*/
		if (left_height > right_height)
		{
			height = left_height;
		}
		else
		{
			height = right_height;
		}
	}
	/* return the height of the tree */
	return (height);
}
