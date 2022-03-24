#include "binary_trees.h"
/**
 * binary_tree_node - size of tree
 * @tree: binary tree
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		return (1 + binary_tree_size(tree->right)
			 + binary_tree_size(tree->left));
	}
	return (0);
}
