// Inclut les structures et prototypes nécessaires pour manipuler des arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary tree
 * using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description : if tree or func is NULL, do nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	// Si le nœud courant est NULL ou si la fonction est NULL → ne rien faire
	if (tree == NULL || func == NULL)
		return;

	// On applique la fonction sur le nœud courant (pré-ordre → visite en premier)
	func(tree->n);

	// On parcourt ensuite récursivement le sous-arbre gauche
	binary_tree_preorder(tree->left, func);

	// Puis on parcourt récursivement le sous-arbre droit
	binary_tree_preorder(tree->right, func);
}
