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

	size_l_node_count = tree->left ? binary_tree_size(tree->left) : 0;
	size_r_node_count = tree->right ? binary_tree_size(tree->right) : 0;


	/* return the size of the tree */
	return (size_l_node_count + size_r_node_count + size_node_count);
}
