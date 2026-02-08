// Inclut les structures et prototypes des arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_height_b - mesure la hauteur d'un arbre pour le calcul du balance
 * @tree: pointeur vers la racine de l'arbre
 *
 * Return: hauteur de l'arbre (1-based), 0 si tree est NULL
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l = 0; /* hauteur sous-arbre gauche */
	size_t r = 0; /* hauteur sous-arbre droit */

	if (tree == NULL)
		return (0);

	l = binary_tree_height_b(tree->left);   /* hauteur gauche */
	r = binary_tree_height_b(tree->right);  /* hauteur droite */

	return ((l > r ? l : r) + 1);           /* max + 1 pour le niveau actuel */
}

/**
 * binary_tree_balance - calcule le facteur d'équilibre d'un arbre binaire
 * @tree: pointeur vers la racine de l'arbre
 *
 * Return: balance factor (gauche - droite), 0 si tree est NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0;  /* hauteur sous-arbre gauche */
	int right_h = 0; /* hauteur sous-arbre droit */

	if (tree == NULL)
		return (0);

	left_h = (int)binary_tree_height_b(tree->left);   /* hauteur gauche */
	right_h = (int)binary_tree_height_b(tree->right); /* hauteur droite */

	return (left_h - right_h); /* balance = gauche - droite */
}
