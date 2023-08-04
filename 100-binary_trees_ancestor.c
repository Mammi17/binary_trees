#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node to find the ancestor
 * @second: a pointer to the second node to find the ancestor
 * Return: pointer or NULL if there is no ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t depth_fst, depth_scnd;

	if (!first || !second)
		return (NULL);
	depth_fst = binary_tree_depth(first);
	depth_scnd = binary_tree_depth(second);
	while (depth_fst > depth_scnd)
	{
		first = first->parent;
		depth_fst--;
	}
	while (depth_scnd > depth_fst)
	{
		second = second->parent;
		depth_scnd--;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}
