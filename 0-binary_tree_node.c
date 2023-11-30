#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates new nodes or a tree
 *
 * @parent: pointers to node place
 * @value: the value will be stored in the node
 *
 * Return: new node or tree
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent == NULL)
		new_node->parent = NULL;
	else
		new_node->parent = parent;
	return (new_node);
}
