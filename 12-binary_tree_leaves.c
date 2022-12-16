#include "binary_trees.h"

/**
 * binary_tree_leaves -> funct that counts the number of leaves
 * @tree: pointer to the root of the tree
 * Return: always return size of tree of 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		leaf++;
	if (tree->right)
		leaf++;

	return (leaf);
}
