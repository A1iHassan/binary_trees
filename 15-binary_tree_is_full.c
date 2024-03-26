#include "binary_trees.h"

/**
 * is_full - checks if node is full
 * @tree: a given node
 *
 * Return: 1 or 0
*/

int is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if ((tree->left && tree->right) || (!tree->left && !tree->right))
		return (1 * is_full(tree->left) * is_full(tree->right));
	return (0);
}

/**
 * binary_tree_is_full - checks if a tree is full
 * @tree: a given node
 *
 * Return: int
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_full(tree));
}
