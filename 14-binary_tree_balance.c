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
 * binary_tree_height_modified - calculates the hieght of a tree
 * @tree: given binary tree
 *
 * Return: number
*/

size_t binary_tree_height_modified(const binary_tree_t *tree)
{
	return (binary_tree_height_calc(tree) - 1);
}

/**
 * binary_tree_balance - calculates the balance factor of a tree
 * @tree: a given node
 *
 * Return: int
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left = binary_tree_height_modified(tree->left);
	right = binary_tree_height_modified(tree->right);
	return (left - right);
}
