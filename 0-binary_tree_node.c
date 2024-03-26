#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node and returns it
 * @parent: direct node on the next higher level
 * @value: value to be held
 *
 * Return: a new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
	{
		free(node);
		return (NULL);
}
	node->parent = parent;
	node->n = value;
	return (node);
}
