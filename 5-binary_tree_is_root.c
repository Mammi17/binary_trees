#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_root - checks if a node is a root
 * @node: node to check
 * Return: 1 or 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
