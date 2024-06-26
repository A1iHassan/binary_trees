#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is the root of a tree
 * @node: a given node
 *
 * Return: int
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
