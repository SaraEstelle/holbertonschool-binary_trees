// Inclut les structures et prototypes des arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_height - mesure la hauteur d'un arbre binaire
 * @tree: pointeur vers la racine de l'arbre
 *
 * Return: hauteur de l'arbre, 0 si tree est NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL) /* arbre vide */
		return (0);

	if (tree->left == NULL && tree->right == NULL) /* feuille */
		return (0);

	height_left = binary_tree_height(tree->left);   /* hauteur sous-arbre gauche */
	height_right = binary_tree_height(tree->right); /* hauteur sous-arbre droit */

	/* retourne la plus grande hauteur + 1 (niveau courant) */
	return ((height_left > height_right ? height_left : height_right) + 1);
}
