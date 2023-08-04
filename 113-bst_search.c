#include "binary_trees.h"
#include <stdio.h>
/**
 * bst_search - searches for a value in a Binary Search Tree
 * @tree: a pointer to the root node of the BST to search
 * @value: the value to search in the tree
 * Return: A pointer or NULL
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *nod = (bst_t *)tree;

	if (!tree)
		return (NULL);

	while (nod)
	{
		if (value == nod->n)
			return (nod);
		if (value < nod->n)
			nod = nod->left;
		else if (value > nod->n)
			nod = nod->right;
	}

	return (NULL);
}
