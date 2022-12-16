 #include "binary_trees.h"

/**
 * binary_tree_size -> function that measures the size of a tree
 * @tree: pointer to the root of the tree
 * Return: returns the size of the tree from a given node
 *
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_sub, right_sub = 0;

	if (tree == NULL)
		return (0);

	left_sub = 1 + binary_tree_size(tree->left);
	right_sub = 1 + binary_tree_size(tree->right);

	return (left_sub + right_sub);
}
