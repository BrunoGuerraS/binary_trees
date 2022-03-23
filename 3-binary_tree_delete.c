#include "binary_trees.h"
/**
 * binary_tree_delete -  function that deletes an entire binary tree
 * @tree: pointer to strucht
 * Rerturn: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}

}
