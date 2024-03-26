#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a whole binary tree
 * @tree: binary tree to be deleted, points to its root
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
