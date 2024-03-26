# include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a child node to the left
 * @parent: pointer to the node for the left child
 * @value: value of the new node
 * Return: pointer to created node, or NULL if node or parent doesn't exist
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *old_node, *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		old_node = parent->left;
		new_node->left = old_node;
		old_node->parent = new_node;
		parent->left = new_node;
		
		return (new_node);
	}

	else
	{
		parent->left = new_node;
		return new_node;
	}
}
