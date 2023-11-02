#include "binary_trees.h"

size_t recurse_for_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to node to measure the balance factor
 * Description: 14. Balance factor
 * Return: see below
 * 1. upon success, return balance factor
 * 2. upon fail, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	/* declare and initialize variables to calculate the heights */
	size_t left_tree_height = 0;
        size_t right_tree_height = 0;

	/* base case */
	if (tree == NULL)
	{
		return (0);
	}

	left_tree_height = find_tree_height_by_nodes(tree->left);
	right_tree_height = find_tree_height_by_nodes(tree->right);

	return (left_tree_height - right_tree_height);
}

/**
 * binary_tree_height - measure height of tree
 * @tree: tree to measure
 *
 * Return: height
 */
size_t find_tree_height_by_nodes(binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	size_t padding = 0;

	if (tree == NULL)
		return (0);

	/* counting height by no of nodes not edges */
	padding = 1;

	left_height = find_tree_height_by_nodes(tree->left);
	right_height = find_tree_height_by_nodes(tree->right);

	return (left_height > right_height
		    ? left_height + padding
		    : right_height + padding);
}
