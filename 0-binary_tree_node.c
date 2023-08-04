#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_node - Creates a binary tree node
 * @parent: - pointer to the parent node of the node to create
 * @value: - the value in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	n_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (n_ode == NULL)
	{
		return (NULL);
	}
	n_node->parent = parent;
	n_node->n = value;
	n_node->left = NULL;
	n_node->right = NULL;
	return (n_node);
}
