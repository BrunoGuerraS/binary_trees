#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to binary_tree_t
 * Return: Nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t dright = 0, dleft = 0;

	if (!tree)
		return (0);
	if (tree->left)
		dleft =  (1 + binary_tree_height(tree->left));
	if (tree->right)
		dright = (1 + binary_tree_height(tree->right));
	if (dright > dleft)
		return (dright);
	else
		return (dleft);
	
}

