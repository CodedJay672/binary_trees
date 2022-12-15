#include "binary_trees.h"

/**
 * binary_tree_is_root -> function that checks if a given node is root
 * @node: pointer to the given node
 * Return: returns 1 if node is root, else return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
