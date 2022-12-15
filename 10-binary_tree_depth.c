#include "binary_trees.h"

/**
 * binary_tree_depth -> fnct to check the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: returns the height of the tree or 0 if root is NULL
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth, right_depth = -1;

	if (tree == NULL)
		return (0);
	else
	{
		left_depth = binary_tree_depth(tree->left);
		right_depth = binary_tree_depth(tree->right);

		if (left_depth > right_depth)
			return (left_depth + 1);
		else
			return (right_depth + 1);
	}
}