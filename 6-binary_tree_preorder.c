#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: tree to traverse through
 * @func: pointer to a function to call for each node.
 * Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *tmp = malloc(sizeof(binary_tree_t));

	tmp = tree;
	if ((tree == NULL) || (func == NULL))
		return;
	func(tree->n);
	while (tree->left != NULL)
	{
		tree = tree->left;
		func(tree->n);
	}
	tree = (tree->parent)->right;
	func(tree->n);
	tree = tmp;
	tree = tree->right;
	func(tree->n);
	while (tree->left != NULL)
	{
		tree = tree->left;
		func(tree->n);
	}
	tree = (tree->parent)->right;
	func(tree->n);
}
