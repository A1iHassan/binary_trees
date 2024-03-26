#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a tree in pre-order
 * @tree: given tree
 * @func: function to be applied on each node
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	(*func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
