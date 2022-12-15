#include "binary_trees.h"

/**
 * binary_tree_inorder -> function that orders binary tree in inorder
 * @tree: pointer to the root of the tree
 * @func: pointer to the function to carry out on node data
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
