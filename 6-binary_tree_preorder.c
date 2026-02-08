// Inclut les structures et prototypes nécessaires pour manipuler des arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse un arbre binaire en pré-ordre
 * @tree: pointeur vers la racine de l'arbre
 * @func: fonction à appeler pour chaque nœud
 *
 * Description : si tree ou func est NULL, ne fait rien
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL) /* vérifie validité des pointeurs */
		return;

	func(tree->n); /* visite du nœud courant */

	binary_tree_preorder(tree->left, func);  /* parcours du sous-arbre gauche */
	binary_tree_preorder(tree->right, func); /* parcours du sous-arbre droit */
}
