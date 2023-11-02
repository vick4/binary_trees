#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l_node_count, size_r_node_count, size_node_count;

	if (tree == NULL)
		return (0);

	size_node_count = 1;

	size_l_node_count = binary_tree_size(tree->left);
	size_r_node_count = binary_tree_size(tree->right);


	/* return the size of the tree */
	return (size_l + size_r + size_node_count);
}
