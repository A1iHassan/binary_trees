#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a given node
 *
 * Return: pointer or NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent == node->parent->parent->left)
	{
		if (node->parent->parent->right)
			return (node->parent->parent->right);
		return (NULL);
	}
	else if (node->parent == node->parent->parent->right)
	{
		if (node->parent->parent->left)
			return (node->parent->parent->left);
		return (NULL);
	}
	return (NULL);
}
