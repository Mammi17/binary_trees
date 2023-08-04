#include "binary_trees.h"
#include <stdio.h>
/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: a double pointer to the root node of the BST to insert the value
 * @value: the value to store in the node to be inserted
 * Return: A pointer or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *point = NULL;
	bst_t *scnd = NULL;
	bst_t *nouvo = NULL;

	if (!tree)
		return (NULL);
	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));

	point = *tree;
	while (point)
	{
		scnd = point;
		if (value < point->n)
			point = point->left;
		else if (value > point->n)
			point = point->right;
		else if (value == point->n)
			return (NULL);
	}

	nouvo = binary_tree_node(NULL, value);
	if (scnd == NULL)
		scnd = nouvo;
	else if (value < scnd->n)
	{
		scnd->left = nouvo;
		nouvo->parent = scnd;
	}
	else
	{
		scnd->right = nouvo;
		nouvo->parent = scnd;
	}

	return (nouvo);
}
