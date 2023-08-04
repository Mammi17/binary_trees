#include "binary_trees.h"
#include <stdio.h>
/**
 * b_tree_height_binary - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: 0 or lght or rght
 */

size_t b_tree_height_binary(const binary_tree_t *tree)
{
	size_t lght = 0;
	size_t rght = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			lght = tree->left ? 1 + b_tree_height_binary(tree->left) : 1;
			rght = tree->right ? 1 + b_tree_height_binary(tree->right) : 1;
		}
		return ((lght > rght) ? lght : rght);
	}
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor (an integer)
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, count = 0;

	if (tree)
	{
		left = ((int)b_tree_height_binary(tree->left));
		right = ((int)b_tree_height_binary(tree->right));
		count = left - right;
	}
	return (count);
}
