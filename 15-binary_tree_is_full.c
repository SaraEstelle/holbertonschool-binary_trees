// Inclut les structures et prototypes des arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 si l’arbre est plein, 0 sinon
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	// Si l’arbre est NULL → ce n’est pas un arbre plein
	if (tree == NULL)
		return (0);

	// Si le nœud n’a aucun enfant → c’est une feuille → considéré comme "full"
	if (!tree->left && !tree->right)
		return (1);

	// Si le nœud a *les deux* enfants,
	// on vérifie récursivement que chaque sous-arbre est plein
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	// Si le nœud a seulement un enfant → arbre non plein
	return (0);
}
