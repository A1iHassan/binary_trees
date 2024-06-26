#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node at the right of a
 * given node
 * @parent: given node to add to
 * @value: new node's value
 *
 * Return: new created node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = binary_tree_node(parent, value), *temp = NULL;

	if (!node || !parent)
	{
		free(node);
		return (NULL);
	}
	node->parent = parent;
	node->n = value;
	if (parent->right == NULL)
	{
		parent->right = node;
	}
	else
	{
		temp = parent->right;
		parent->right = node;
		node->right = temp;
		temp->parent = node;
	}
	return (node);
}
