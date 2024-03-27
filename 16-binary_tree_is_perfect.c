# include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: intger value showing that the tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = binary_tree_depth(tree);
	int level = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
