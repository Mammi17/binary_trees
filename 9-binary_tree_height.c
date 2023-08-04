#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 * Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hght_l = 0;
	size_t hght_r = 0;

	if (!tree)
		return (0);
	hght_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	hght_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (hght_l > hght_r ? hght_l : hght_r);
}
