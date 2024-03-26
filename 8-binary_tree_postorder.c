#include "binary_trees.h"

/**
 * binary_tree_postorder - travesres a list post order
 * @tree: given tree
 * @func: function to be applied on each node
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	(*func)(tree->n);
}
