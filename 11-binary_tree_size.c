#include "binary_trees.h"

/**
 * binary_tree_sizecalc - calculates the size of a tree
 * @tree: given node
 *
 * Return: number
*/

size_t binary_tree_sizecalc(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left = 1 + binary_tree_sizecalc(tree->left);
	right = 1 +  binary_tree_sizecalc(tree->right);
	return (left + right);
}

/**
 * binary_tree_size - calculates the size of a tree
 * @tree: given node
 *
 * Return: number
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	return (binary_tree_sizecalc(tree) / 2);
}
