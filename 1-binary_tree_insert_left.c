#include "binary_trees.h"

/**
 * binary_tree_insert_left -> function which inserts a new node as the left
 * child of another node
 *
 * Description: if parent node already has a left child node. the new node
 * will replace if while the left child will become the left child of the
 * new node
 *
 * @parent: pointer to parent node to add the new node
 * @value : integer value for the new node
 * Return: returns pointer to the new node
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	new_left = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_left == NULL)
		return (NULL);

	new_left->n = value;
	new_left->parent = parent;

	if (parent->left)
	{
		new_left->right = NULL;
		new_left->left = parent->left;
		new_left->left->parent = new_left;
		parent->left = new_left;
		return (new_left);
	}

	new_left->left = parent->left;
	new_left->right = NULL;
	parent->left = new_left;

	return (new_left);
}
