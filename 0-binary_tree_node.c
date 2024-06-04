#include "binary_trees.h"

/**
 * binary_tree_node - function
 * @parent: paremter
 * @value: parameter
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = malloc(sizeof(binary_tree_t));

	if (tmp == NULL)
		return NULL;
	else
	{
		if (parent == NULL)
			tmp->parent = parent;
		else
		{
			tmp->parent = parent;
		}
		tmp->n = value;
		return (tmp);
	}
}
