// Inclut les définitions et structures pour les arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	// Initialise un compteur pour le nombre de nœuds ayant au moins un enfant
	size_t count = 0;

	// Si l’arbre est NULL → aucun nœud à compter
	if (tree == NULL)
		return (0);

	// Vérifie si le nœud courant possède au moins un enfant
	if (tree->left != NULL || tree->right != NULL)
		count = 1;

	// Ajoute récursivement le nombre de nœuds ayant au moins un enfant
	// dans le sous-arbre gauche
	count += binary_tree_nodes(tree->left);

	// Ajoute récursivement le nombre de nœuds ayant au moins un enfant
	// dans le sous-arbre droit
	count += binary_tree_nodes(tree->right);

	// Retourne le nombre total trouvé
	return (count);
}
