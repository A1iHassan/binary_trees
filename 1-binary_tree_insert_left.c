#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new node at the left of a
 * given node
 * @parent: given node to add to
 * @value: new node's value
 *
 * Return: new created node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t)), *temp = NULL;

	if (!node || !parent)
	{
		free(node);
		return (NULL);
	}
	node->parent = parent;
	node->n = value;
	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;
	return (node);
}
