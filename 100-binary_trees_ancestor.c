#include "binary_trees.h"

/**
 * binary_trees_ancestor -> funct which returns the closest ancestor to
 * n1 and n2.
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to the common ancestor to first and second
 *
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first->parent == second)
		return (first->parent);
	if (second->parent == first)
		return (second->parent);
	if (first->parent == second->parent)
		return (first->parent);

	return (binary_trees_ancestor(first->parent, second->parent));
}
