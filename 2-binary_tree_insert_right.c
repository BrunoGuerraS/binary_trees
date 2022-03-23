#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a
 * node as the right-child of another node
 * @parent: pointer to binary_tree_t
 * @value: int
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

	node->right = parent->right;
	parent->right = node;

	if (node->right)
		node->right->parent = node;

	return (node);

}
