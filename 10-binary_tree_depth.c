#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: size of the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = -1;

	if (tree == NULL)
		return (0);
	while (tree != NULL)
	{
		i = i + 1;
		tree = tree->parent;
	}
	return (i);
}
