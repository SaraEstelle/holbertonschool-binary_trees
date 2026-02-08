// Inclut les structures et prototypes des arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_depth - mesure la profondeur d'un nœud dans un arbre binaire
 * @tree: pointeur vers le nœud
 *
 * Return: profondeur du nœud, 0 si tree est NULL ou racine
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL) /* nœud inexistant */
		return (0);

	while (tree->parent != NULL) /* remonte jusqu'à la racine */
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
