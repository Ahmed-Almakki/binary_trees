#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  checks if a node is a leaf
 * @node: to check if it leaf
 * Return: int
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if ((node->right == NULL) & (node->left == NULL))
		return (1);
	return (0);
}