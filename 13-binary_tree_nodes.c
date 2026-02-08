// Inclut les définitions et structures pour les arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_nodes - compte les nœuds ayant au moins un enfant
 * @tree: pointeur vers la racine de l'arbre
 *
 * Return: nombre de nœuds avec au moins un enfant, 0 si tree est NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	/* Si l'arbre est NULL, il n'y a rien à compter */
	if (tree == NULL)
		return (0);

	/* Si le nœud a au moins un enfant, on l’inclut */
	if (tree->left != NULL || tree->right != NULL)
		count = 1;

	/* Ajoute récursivement les nœuds de gauche et de droite */
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
