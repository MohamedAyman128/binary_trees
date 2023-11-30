#include "binary_trees.h"

size_t count(const binary_tree_t *tree, size_t result);
/**
 * binary_tree_size - getting tree size
 *
 * @tree: node we want to count
 *
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t result = 0;

	if (tree == NULL)
		return (0);
	result = count(tree, result);
	return (result);
}

/**
 * count - count the size
 *
 * @tree: the node
 * @result: the count
 *
 * Return: the numbers
 */
size_t count(const binary_tree_t *tree, size_t result)
{
	if (tree == NULL)
		return (result);
	result = count(tree->left, result);
	result = count(tree->right, result);
	result++;
	return (result);
}
