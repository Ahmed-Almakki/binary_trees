#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent node
 * @value: value to be stored in node
 * Return: return a pointer to the created node, or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = malloc(sizeof(binary_tree_t));

	if (tmp == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	tmp->n = value;
	tmp->left = NULL;
	tmp->right = NULL;
	tmp->parent = parent;

	if (parent->right != NULL)
	{
		binary_tree_t *temp = malloc(sizeof(binary_tree_t));

		temp = parent->right;
		temp->parent = tmp;
		temp->left = NULL;
		temp->right = NULL;
		parent->right = tmp;
		tmp->right = temp;
	}
	else
	{
		parent->right = tmp;
	}
	return (tmp);
}
