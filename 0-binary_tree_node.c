# include "binary_trees.h"

/**
 * binary_tree_node - function that creates a new node for a binary tree
 * @parent: the pointer to a parent node
 * @value: the data stored in the tree
 * Return: a pointer to the new node, or NULL if none exists
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node != NULL)
	{
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->n = value;
		new_node->parent = parent;

		return (new_node);
	}

	else
		return (NULL);
}
