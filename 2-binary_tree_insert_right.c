#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - insert nodes at right
 *
 * @parent: pointer to the parent
 * @value: the value to insert
 *
 * Return: new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = binary_tree_node(parent, value);
		if (parent->right == NULL)
			return (NULL);
		return (parent->right);
	}
	else if (parent->right != NULL)
	{
		tmp = binary_tree_node(parent, value);
		if (tmp == NULL)
			return (NULL);
		tmp->right = parent->right;
		parent->right->parent = tmp;
		parent->right = tmp;
	}
	return (tmp);
}
