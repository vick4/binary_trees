#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - delete the entire binary tree
 *
 * @tree: pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (NULL);
	}


	/*recursively search for all nodes left and right and delete them*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
