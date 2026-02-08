// Inclut les définitions nécessaires (struct binary_tree_s, prototypes…)
#include "binary_trees.h"

/**
 * binary_tree_uncle - trouve l’oncle d’un nœud
 * @node: pointeur vers le nœud dont on cherche l’oncle
 *
 * Return: pointeur vers l’oncle du nœud
 * Si node est NULL, ou si le parent/grand-parent est NULL → retourne NULL
 * Si le nœud n’a pas d’oncle → retourne NULL
 *
 * L’oncle est le frère du parent.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grand_parent;

	// Impossible d’avoir un oncle si node, parent ou grand-parent est NULL
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	// parent = parent du node
	parent = node->parent;

	// grand_parent = parent du parent
	grand_parent = parent->parent;

	// Si le parent est l’enfant gauche du grand-parent → l’oncle = enfant droit
	if (grand_parent->left == parent)
		return (grand_parent->right);

	// Sinon, si le parent est l’enfant droit → l’oncle = enfant gauche
	if (grand_parent->right == parent)
		return (grand_parent->left);

	// Au cas improbable où aucune des conditions n’est vraie → pas d’oncle
	return (NULL);
}
