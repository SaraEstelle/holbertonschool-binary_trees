// Inclut les structures et prototypes nécessaires pour les arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: The depth of the node, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	// Variable utilisée pour compter le nombre de niveaux au-dessus du nœud
	size_t depth = 0;

	// Si tree est NULL → profondeur = 0
	if (tree == NULL)
		return (0);

	// Tant que le nœud a un parent, on remonte d’un niveau
	while (tree->parent != NULL)
	{
		// Incrémente la profondeur
		depth++;

		// Passe au nœud parent
		tree = tree->parent;
	}

	// Retourne la profondeur comptée
	return (depth);
}
