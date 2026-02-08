// Inclut les structures et prototypes des arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse un arbre binaire en post-ordre
 * @tree: pointeur vers la racine de l'arbre
 * @func: fonction à appeler pour chaque nœud
 *
 * Description : si tree ou func est NULL, ne fait rien
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL) /* vérifie validité des pointeurs */
		return;

	binary_tree_postorder(tree->left, func);  /* sous-arbre gauche */
	binary_tree_postorder(tree->right, func); /* sous-arbre droit */
	func(tree->n);                             /* visite du nœud courant */
}
