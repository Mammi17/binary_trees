#include "binary_trees.h"
#include <stdio.h>
/**
 *pow_recur - returns the value of x raised to the power of y
 *@x: the value to exponentiate
 *@y: the power to raise x to
 *Return: x or -1
 */

int pow_recur(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * pow_recur(x, y - 1));

}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t hght = 0;
	size_t nod = 0;
	size_t pow = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	hght = binary_tree_height(tree);
	nod = binary_tree_size(tree);

	pow = (size_t)pow_recur(2, hght + 1);
	return (pow - 1 == nod);
}
