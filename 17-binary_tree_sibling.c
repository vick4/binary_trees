#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - function to find sibling of a node in binary tree
 * @node: node to find the sibling
 *
 * Return: pointer to the sibling node, or NULL if node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent) {
		return NULL;
}

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
