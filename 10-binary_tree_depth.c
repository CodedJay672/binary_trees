#include "binary_trees.h"

/**
 * binary_tree_depth -> fnct to check the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: returns the height of the tree or 0 if root is NULL
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		return (binary_tree_depth(tree->parent) + 1);
	return (0);
}
