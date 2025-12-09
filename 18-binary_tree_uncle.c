#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node If node is NULL, return NULL
 * If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grand_parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	grand_parent = parent->parent;

	/* si parent est l’enfant gauche → oncle = enfant droit du grandparent */
	if (grand_parent->left == parent)
		return (grand_parent->right);

	/* sinon → le parent est l’enfant droit → oncle = enfant gauche */
	return (grand_parent->left);
}
