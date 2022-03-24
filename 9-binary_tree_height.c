#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to binary_tree_t
 * Return: Nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	if (tree->left)
		return (1 + binary_tree_height(tree->left));
	else
		return (1 + binary_tree_height(tree->right));

	return (0);
}

