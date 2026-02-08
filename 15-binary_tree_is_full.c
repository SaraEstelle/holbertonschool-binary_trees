// Inclut les structures et prototypes des arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_is_full - vérifie si un arbre binaire est plein
 * @tree: pointeur vers la racine de l'arbre
 *
 * Return: 1 si l’arbre est plein, 0 sinon
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	// Si l’arbre est NULL → ce n’est pas un arbre plein
	if (tree == NULL)
		return (0);

	// Si le nœud n’a aucun enfant → feuille → considéré comme plein
	if (!tree->left && !tree->right)
		return (1);

	// Si le nœud a les deux enfants, vérifier récursivement les sous-arbres
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	// Si le nœud n’a qu’un seul enfant → arbre non plein
	return (0);
}
