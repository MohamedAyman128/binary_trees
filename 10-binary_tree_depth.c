#include "binary_trees.h"

size_t count(const binary_tree_t *tree, size_t result);
/**
 * binary_tree_depth - getting tree size
 *
 * @tree: node we want to count
 *
 * Return: the size
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t result = 0;

	if (tree == NULL)
		return (0);
	result = count(tree, result);
	return (result - 1);
}
/**
 * count - counts the tree
 *
 * @tree: the node
 * @result: the integer
 *
 * Return: size_t
 */
size_t count(const binary_tree_t *tree, size_t result)
{
	if (tree == NULL)
		return (0);
	result = count(tree->parent, result);
	result++;
	return (result);
}
