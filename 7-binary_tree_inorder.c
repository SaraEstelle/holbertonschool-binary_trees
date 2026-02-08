// Inclut les structures et prototypes nécessaires pour manipuler les arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse un arbre binaire en ordre croissant (in-order)
 * @tree: pointeur vers la racine de l'arbre
 * @func: fonction à appeler pour chaque nœud
 *
 * Description : si tree ou func est NULL, ne fait rien
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL) /* vérifie validité des pointeurs */
		return;

	binary_tree_inorder(tree->left, func);  /* parcours du sous-arbre gauche */
	func(tree->n);                           /* visite du nœud courant */
	binary_tree_inorder(tree->right, func); /* parcours du sous-arbre droit */
}
