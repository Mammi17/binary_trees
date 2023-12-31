#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_insert_right - inserts a node as the
 *					right-child of another node
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 * Return: a pointer or NULL on failure if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (!parent)
		return (NULL);
	n_node = malloc(sizeof(binary_tree_t));
	if (!n_node)
		return (NULL);
	n_node->n = value;
	n_node->parent = parent;
	n_node->left = NULL;
	n_node->right = parent->right;
	parent->right = n_node;
	if (n_node->right)
		n_node->right->parent = n_node;
	return (n_node);
}
