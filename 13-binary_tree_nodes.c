#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: binary tree
 * Rerturn: size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;


	if (!tree)
		return (0);

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	if (tree->right || tree->left)
		return (1 + count);

	return (0);
}
