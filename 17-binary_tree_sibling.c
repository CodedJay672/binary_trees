#include "binary_trees.h"

/**
 * binary_tree_sibling -> funct that finds the sibling of a node
 * @node: pointer to the node to check for a sibling
 * Return: returns pointer address of the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
