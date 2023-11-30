#include "binary_trees.h"


size_t binary_tree_nodes_copy(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - checks if a binary tree is full
 * @tree: pointer to tree's room
 * Return: true if it's full and not otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_nodes_copy(tree) % 2 &&
			binary_tree_height(tree->left) ==
			binary_tree_height(tree->right));
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

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}
