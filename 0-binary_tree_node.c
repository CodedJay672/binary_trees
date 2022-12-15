#include "binary_trees.h"

/**
 * binary_tree_node -> function that creates a node in a binary tree
 * @parent: pointer to parent node
 * @value: integer value for the new node
 * Return: return pointer to new node or NULL if fail
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
