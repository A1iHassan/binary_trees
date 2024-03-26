#include "binary_trees.h"

/**
 * binary_tree_depth_calc - measures the depth of a node in a tree
 * @tree: a given node
 *
 * Return: number
*/

size_t binary_tree_depth_calc(const binary_tree_t *tree)
{
	int depth = 0;

	if (!tree)
		return (0);
	depth = 1 + binary_tree_depth_calc(tree->parent);
	return (depth);
}

/**
 * binary_tree_depth - measures the depth of a node in a tree
 * @tree: a given node
 *
 * Return: number
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_depth_calc(tree) - 1);
}
