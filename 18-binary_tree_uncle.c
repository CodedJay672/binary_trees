#include "binary_trees.h"

/**
 * binary_tree_uncle -> funct that finds the uncle of a given node
 * @node: pointer to node to find the uncle
 * Return: returns pointer to the uncle of given node
 *
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
