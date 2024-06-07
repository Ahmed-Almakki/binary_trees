#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent node
 * @value: value of node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = malloc(sizeof(binary_tree_t));

	if ((tmp == NULL) || (parent == NULL))
		return (NULL);
	tmp->n = value;
	tmp->parent = parent;
	tmp->right = NULL;
	tmp->left = parent->left;
	parent->left = tmp;
	if (tmp->left != NULL)
	{
		tmp->left->parent = tmp;
	}
	return (tmp);
}
