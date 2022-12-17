#include "binary_trees.h"

/**
 * binary_tree_height -> fnct to check the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: returns the height of the tree or 0 if root is NULL
 *
 */

size_t height(const binary_tree_t *tree)
{
	size_t left_height, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + height(tree->left) : 0;
	right_height = tree->right ? 1 + height(tree->right) : 0;

	return ((left_height > right_height) ? left_height : right_height);
}

/**
 * printLevelOrder -> funct that prints in level order
 * @tree: pointer to the root of the tree
 * @func: pointer to function to perform on node data
 * @lev: tree level integer
 */

void printLevelOrder(const binary_tree_t *tree, void func(int), size_t lev)
{
	if (tree == NULL)
		return;
	if (lev == 0)
		func(tree->n);
	else if (lev > 0)
	{
		printLevelOrder(tree->left, func, lev - 1);
		printLevelOrder(tree->right, func, lev - 1);
	}
}

/**
 * binary_tree_levelorder -> funct which visit nodes in lovelorder
 * @tree: pointer to the root of the tree
 * @func: pointer to function to perform on node
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	size_t h = height(tree);
	size_t count;

	for (count = 0; count <= h; count += 1)
		printLevelOrder(tree, func, count);
}
