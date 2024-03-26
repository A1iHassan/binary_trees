#include "binary_trees.h"

/**
 * binary_tree_is_leaf_modified - checks if a node is a leaf or not
 * @node: node to be checked
 *
 * Return: 0 or 1
*/

int binary_tree_is_leaf_modified(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	return (1);
}

/**
 * binary_tree_preorder_modified - traverses a tree in pre-order
 * @tree: given tree
 * @func: function to be applied on each node
 *
 * Return: int
*/

int binary_tree_preorder_modified(
	const binary_tree_t *tree, int (*func)(const binary_tree_t *))
{
	int count = 0, x = 0, y = 0;

	if (!tree)
		return (0);
	count += (*func)(tree);
	x = binary_tree_preorder_modified(tree->left, func);
	y = binary_tree_preorder_modified(tree->right, func);
	return (count + x + y);
}

/**
 * binary_tree_leaves - count the leaves of a tree
 * @tree: a given node
 *
 * Return: number
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_preorder_modified(tree, &binary_tree_is_leaf_modified));
}
