// Inclut les définitions nécessaires (struct binary_tree_s, prototypes…)
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node
 * If node is NULL, return NULL
 * If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	// Déclare deux pointeurs : parent et grand_parent
	binary_tree_t *parent, *grand_parent;

	// Si node est NULL, ou n’a pas de parent, ou le parent n’a pas de parent
	// → il est impossible d’avoir un oncle
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	// parent pointe sur le parent du node
	parent = node->parent;

	// grand_parent pointe sur le parent du parent
	grand_parent = parent->parent;

	// Si le parent est l’enfant gauche du grand-parent
	// → l’oncle est l’enfant droit
	if (grand_parent->left == parent)
