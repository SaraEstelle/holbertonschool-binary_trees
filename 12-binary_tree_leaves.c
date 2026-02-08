// Inclut les structures et prototypes nécessaires pour les arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_leaves - compte le nombre de feuilles dans un arbre binaire
 * @tree: pointeur vers la racine de l'arbre
 *
 * Return: nombre de feuilles, 0 si tree est NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* Si l'arbre est NULL, il n'y a pas de feuilles */
	if (tree == NULL)
		return (0);

	/* Si le nœud n’a pas d’enfant, c’est une feuille */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Sinon, somme des feuilles du sous-arbre gauche et droit */
	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
