#include "binary_trees.h"

/**
 * binary_tree_delete - supprime un arbre binaire entier
 * @tree: pointeur vers la racine de l'arbre à supprimer
 *
 * Return: rien
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL) /* si l'arbre est vide */
		return;

	binary_tree_delete(tree->left);  /* supprimer le sous-arbre gauche */
	binary_tree_delete(tree->right); /* supprimer le sous-arbre droit */
	free(tree);                      /* libérer le noeud courant */
}
