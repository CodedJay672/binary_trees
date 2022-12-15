#include "binary_trees.h"

/**
 * binary_tree_insert_right -> function which inserts a new node as the right
 * child of another node
 *
 * Description: if parent node already has a right child node. the new node
 * will replace if while the right child will become the right child of the
 * new node
 *
 * @parent: pointer to parent node to add the new node
 * @value : integer value for the new node
 * Return: returns pointer to the new node
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	new_right = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_right == NULL)
		return (NULL);

	new_right->n = value;
	new_right->parent = parent;

	if (parent->left)
	{
		new_right->left = NULL;
		new_right->right = parent->right;
		new_right->right->parent = new_right;
		parent->right = new_right;
		return (new_right);
	}

	new_right->right = parent->right;
	new_right->right = NULL;
	parent->right = new_right;

	return (new_right);
}
