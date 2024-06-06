#include "binary_trees.h"

/**
 * count - count heght
 * @tree: node
 * @i: count up
 * Return: height
 */
size_t count(const binary_tree_t *tree)
{
	size_t  i;

	if (tree == NULL)
		return (0);
	i = count(tree->left);
	i = count(tree->right);
	return (1 + i);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height.
 * Return: hieght
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *lft = malloc(sizeof(binary_tree_t));
	const binary_tree_t *rght = malloc(sizeof(binary_tree_t));
	size_t j;

	if (tree == NULL)
		return (0);
	lft = tree->left;
	rght = tree->right;
	j = count(lft);
	j = count(rght);
	return (j);
}
