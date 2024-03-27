# include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: integer value that indicates balance factor, 0 if NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int bal = 0;

	if (!tree)
		return (0);

	bal = binary_tree_height(tree->left) -
		binary_tree_height(tree->right);

	return (bal);
}
