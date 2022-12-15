#include "binary_trees.h"

/**
 * binary_tree_preorder -> function that traverses tree in preorder
 * @tree: pointer for tree root
 * @func: pointer to function to execute on node data
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
		return;
	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
