#include "binary_trees.h"

/**
 * binary_tree_height_calc - calculates the hieght of a tree
 * @tree: given binary tree
 *
 * Return: number
*/

size_t binary_tree_height_calc(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left = 1 + binary_tree_height_calc(tree->left);
	right = 1 + binary_tree_height_calc(tree->right);
	if (left >= right)
		return (left);
	return (right);
}

/**
 * binary_tree_height - calculates the hieght of a tree
 * @tree: given binary tree
 *
 * Return: number
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	return (binary_tree_height_calc(tree) - 1);
}
