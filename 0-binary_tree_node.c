#include "binary_trees.h"
// Contient la définition de `binary_tree_t` et fonctions utilitaires.

/**
 * binary_tree_node - crée un nouveau noeud d'arbre binaire
 * @parent: pointeur vers le parent du noeud à créer
 * @value: valeur à mettre dans le nouveau noeud
 *
 * Points clés :
 * - Alloue dynamiquement un nouveau noeud.
 * - Initialise `n`, `parent`, `left` et `right`.
 *
 * Return: pointeur vers le nouveau noeud ou NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Alloue la mémoire pour le nouveau noeud */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL) /* échec allocation */
		return (NULL);

	/* Initialise le noeud */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node); /* retourne le noeud créé */
}
