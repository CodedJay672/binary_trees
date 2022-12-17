#include "binary_trees.h"

/**
 * binary_tree_height -> fnct to check the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: returns the height of the tree or 0 if root is NULL
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

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
	if (lev == 1)
		func(tree->n);
	if (lev > 1) ? printLevelOrder(tree->left, func, lev - 1) :
		printLevelOrder(tree->right, func, lev -1);
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
	size_t height = binary_tree_height(tree);
	size_t count;

	for (count = 1; count <= height; count += 1)
		printLevelOrder(tree, func, count);
}
