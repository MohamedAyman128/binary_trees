#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - insert nodes at left
 *
 * @parent: pointer to the parent
 * @value: the value to insert
 *
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
		if (parent->left == NULL)
			return (NULL);
		return (parent->left);
	}
	else if (parent->left != NULL)
	{
		tmp = binary_tree_node(parent, value);
		if (tmp == NULL)
			return (NULL);
		tmp->left = parent->left;
		parent->left->parent = tmp;
		parent->left = tmp;
	}
	return (tmp);
}
