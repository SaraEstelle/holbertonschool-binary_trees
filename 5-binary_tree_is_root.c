// Inclut les structures et prototypes nécessaires pour les arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: pointer to the node to check
 *
 * Return: return 1 if node is a root, otherwise 0
 * If node is NULL, return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	// Si le pointeur vers le nœud est NULL → ce n'est pas une racine
	if (node == NULL)
		return (0);

	// Si le nœud n’a pas de parent, alors c’est la racine
	if (node->parent == NULL)
		return (1);

	// Sinon, le nœud a un parent, donc il n’est pas une racine
	return (0);
}
