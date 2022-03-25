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

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: is a pointer to the root node of the tree to measure
 * the balance factor
 *
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left  = tree->left ? (int)binary_tree_height(tree->left) : -1;
	right = tree->right ? (int)binary_tree_height(tree->right) : -1;
	return (left - right);
}
