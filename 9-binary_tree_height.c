# include "binary_trees.h"

/**
 * max - function that finds the maximum of two integers
 * @a: the first int
 * @b: the second int
 * Return: the maximum of the two integers
 */

size_t max(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of the bnary tree, 0 if tree = NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		left_height = 0;
	left_height = binary_tree_height(tree->left) + 1;

	if (tree->right == NULL)
		right_height = 0;
	right_height = binary_tree_height(tree->right) + 1;

	return (max(left_height, right_height));
}
