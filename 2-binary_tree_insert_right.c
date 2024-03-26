# include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node to the right of a
 * binary tree
 * @parent: the pointer to the parent node
 * @value: the value to be stored in the node
 * Return: pointer to the created node, NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *old_node, *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		old_node = parent->right;
		new_node->right = old_node;
		old_node->parent = new_node;
		parent->right = new_node;

		return (new_node);
	}

	else
	{
		parent->right = new_node;
		return (new_node);
	}
}
