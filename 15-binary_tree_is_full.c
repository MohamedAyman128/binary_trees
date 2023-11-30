#include "binary_trees.h"


size_t binary_tree_nodes_copy(const binary_tree_t *tree);

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to tree's room
 * Return: true if it's full and not otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_nodes_copy(tree) % 2);
}

/**
 * binary_tree_nodes_copy - count all the nodes
 * @tree: pointer the tree's root
 * Return: number of all nodes
 */
size_t binary_tree_nodes_copy(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (count);
	}
	count += binary_tree_nodes_copy(tree->left);
	count += binary_tree_nodes_copy(tree->right);
	count += 1;
	return (count);
}
