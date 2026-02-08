#include "binary_trees.h"
// Contient la définition de `binary_tree_t` et fonctions utilitaires.

/**
 * binary_tree_insert_right - insère un noeud comme fils droit d'un parent
 * @parent: pointeur vers le noeud parent
 * @value: valeur à mettre dans le nouveau noeud
 *
 * Return: pointeur vers le nouveau noeud ou NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL) /* impossible d'insérer sans parent */
		return (NULL);

	/* Allocation du nouveau noeud */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialisation du noeud */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/* Si le parent avait déjà un fils droit */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;    /* l'ancien devient fils droit du nouveau */
		parent->right->parent = new_node;   /* met à jour son parent */
	}

	/* Placement du nouveau noeud comme fils droit du parent */
	parent->right = new_node;

	return (new_node); /* retourne le nouveau noeud */
}
