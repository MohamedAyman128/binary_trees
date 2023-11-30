#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if its leaf
 *
 * @node: node to check
 *
 * Return: 1 if it's leaf, 0 if it's not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right != NULL || node->left != NULL)
		return (0);
	else
		return (1);
}
