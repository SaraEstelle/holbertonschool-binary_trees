#include "binary_trees.h"
/**
* binary_tree_insert_left -  inserts a node as the left-child of another node
* @parent: pointer to the node to insert the left-child in
* @value: the value to store in the new node
*
* Return: pointer to the created node, or NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* stock 'value' dans le champ n */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		/* L'ancien fils gauche devient le fils gauche du nouveau nœud */
		new_node->left = parent->left;
		/* On met à jour le parent de l'ancien fils gauche */
		parent->left->parent = new_node;
	}

	/* On place le nouveau nœud comme fils gauche du parent */
	parent->left = new_node;

	return (new_node);
}
