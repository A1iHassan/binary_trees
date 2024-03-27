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
	if (!tree)
		return (0);
	return (binary_tree_height_calc(tree) - 1);
}

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
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: a given node
 *
 * Return: 1 or 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int x = 0, left = 0, right = 0;

	if (!tree)
		return (0);
	x = is_full(tree);
	left = binary_tree_height_modified(tree->left);
	right = binary_tree_height_modified(tree->right);
	if (x && left == right)
		return (1);
	return (0);
}
