# 🌳 Binary Trees - Holberton School Project

![Binary Trees Banner](https://raw.githubusercontent.com/aysuarex/readme-template/master/binary-tree.png)

## 📋 Description

Ce projet explore en profondeur les **arbres binaires** et leurs différentes variantes. Il fait partie du curriculum de Holberton School et couvre les concepts fondamentaux des structures de données arborescentes, incluant les arbres binaires simples, les arbres binaires de recherche (BST), les arbres AVL et les tas binaires (Binary Heap).

À travers 18 tâches obligatoires, ce projet nous a permis d'implémenter diverses fonctions pour créer, manipuler et analyser des arbres binaires en langage C.

---

## 🎯 Learning Objectives

À la fin de ce projet, nous sommes capables d'expliquer les concepts suivants sans l'aide de Google :

### Concepts Généraux
- **Qu'est-ce qu'un arbre binaire ?**
  - Une structure de données hiérarchique où chaque nœud peut avoir au maximum deux enfants (gauche et droit)
  
- **Différence entre un arbre binaire et un arbre binaire de recherche (BST)**
  - Dans un BST, pour chaque nœud : enfant gauche < nœud < enfant droit
  
- **Gain en complexité temporelle par rapport aux listes chaînées**
  - Recherche : O(log n) au lieu de O(n) pour un arbre équilibré
  - Insertion/Suppression : O(log n) en moyenne
  
- **Profondeur, hauteur et taille d'un arbre binaire**
  - **Profondeur** : distance entre un nœud et la racine
  - **Hauteur** : distance entre un nœud et sa feuille la plus éloignée
  - **Taille** : nombre total de nœuds dans l'arbre

### Méthodes de Parcours
- **Préordre (Pre-order)** : Racine → Gauche → Droite
- **Inordre (In-order)** : Gauche → Racine → Droite
- **Postordre (Post-order)** : Gauche → Droite → Racine
- **Parcours en largeur (Level-order)** : niveau par niveau

### Types d'Arbres Binaires
- **Arbre complet** : tous les niveaux sont remplis sauf le dernier (rempli de gauche à droite)
- **Arbre plein** : chaque nœud a 0 ou 2 enfants
- **Arbre parfait** : tous les niveaux sont complètement remplis
- **Arbre équilibré** : différence de hauteur entre sous-arbres ≤ 1

---

## 🛠️ Compilation & Environnement

### Requirements
- **Éditeurs autorisés** : `vi`, `vim`, `emacs`
- **Système** : Ubuntu 20.04 LTS
- **Compilateur** : gcc avec les flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Style de code** : Betty style
- **Limite** : Maximum 5 fonctions par fichier
- **Bibliothèque standard** : Autorisée

### Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_trees
```

---

## 📁 Structure du Projet

```
holbertonschool-binary_trees/
│
├── binary_trees.h              # Header file avec toutes les structures et prototypes
├── binary_tree_print.c         # Fonction utilitaire pour visualiser les arbres
│
├── 0-binary_tree_node.c        # Créer un nœud
├── 1-binary_tree_insert_left.c # Insérer à gauche
├── 2-binary_tree_insert_right.c # Insérer à droite
├── 3-binary_tree_delete.c      # Supprimer un arbre
├── 4-binary_tree_is_leaf.c     # Vérifier si c'est une feuille
├── 5-binary_tree_is_root.c     # Vérifier si c'est la racine
├── 6-binary_tree_preorder.c    # Parcours préordre
├── 7-binary_tree_inorder.c     # Parcours inordre
├── 8-binary_tree_postorder.c   # Parcours postordre
├── 9-binary_tree_height.c      # Calculer la hauteur
├── 10-binary_tree_depth.c      # Calculer la profondeur
├── 11-binary_tree_size.c       # Calculer la taille
├── 12-binary_tree_leaves.c     # Compter les feuilles
├── 13-binary_tree_nodes.c      # Compter les nœuds avec enfants
├── 14-binary_tree_balance.c    # Calculer le facteur d'équilibre
├── 15-binary_tree_is_full.c    # Vérifier si arbre plein
├── 16-binary_tree_is_perfect.c # Vérifier si arbre parfait
├── 17-binary_tree_sibling.c    # Trouver le frère d'un nœud
└── 18-binary_tree_uncle.c      # Trouver l'oncle d'un nœud
```

---

## 📚 Structures de Données

### Structure de Base
```c
/**
 * struct binary_tree_s - Structure d'un nœud d'arbre binaire
 * @n: Valeur stockée dans le nœud
 * @parent: Pointeur vers le nœud parent
 * @left: Pointeur vers l'enfant gauche
 * @right: Pointeur vers l'enfant droit
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;      /* Binary Search Tree */
typedef struct binary_tree_s avl_t;      /* AVL Tree */
typedef struct binary_tree_s heap_t;     /* Max Binary Heap */
```

---

## 🔍 Liste des Tâches

| Tâche | Fichier | Description |
|-------|---------|-------------|
| **0** | `0-binary_tree_node.c` | Créer un nouveau nœud |
| **1** | `1-binary_tree_insert_left.c` | Insérer un nœud à gauche |
| **2** | `2-binary_tree_insert_right.c` | Insérer un nœud à droite |
| **3** | `3-binary_tree_delete.c` | Supprimer tout l'arbre |
| **4** | `4-binary_tree_is_leaf.c` | Vérifier si un nœud est une feuille |
| **5** | `5-binary_tree_is_root.c` | Vérifier si un nœud est la racine |
| **6** | `6-binary_tree_preorder.c` | Parcours préordre (Racine-Gauche-Droite) |
| **7** | `7-binary_tree_inorder.c` | Parcours inordre (Gauche-Racine-Droite) |
| **8** | `8-binary_tree_postorder.c` | Parcours postordre (Gauche-Droite-Racine) |
| **9** | `9-binary_tree_height.c` | Mesurer la hauteur d'un arbre |
| **10** | `10-binary_tree_depth.c` | Mesurer la profondeur d'un nœud |
| **11** | `11-binary_tree_size.c` | Mesurer la taille d'un arbre |
| **12** | `12-binary_tree_leaves.c` | Compter le nombre de feuilles |
| **13** | `13-binary_tree_nodes.c` | Compter les nœuds avec au moins 1 enfant |
| **14** | `14-binary_tree_balance.c` | Mesurer le facteur d'équilibre |
| **15** | `15-binary_tree_is_full.c` | Vérifier si l'arbre est plein |
| **16** | `16-binary_tree_is_perfect.c` | Vérifier si l'arbre est parfait |
| **17** | `17-binary_tree_sibling.c` | Trouver le frère (sibling) d'un nœud |
| **18** | `18-binary_tree_uncle.c` | Trouver l'oncle d'un nœud |

---

## 💡 Concepts Clés Implémentés

### 1. Création et Manipulation
- Allocation dynamique de mémoire pour les nœuds
- Gestion des pointeurs parent/enfants
- Insertion avec gestion des cas spéciaux
- Suppression récursive (postordre)

### 2. Parcours d'Arbres
- **Récursion** : technique principale pour tous les parcours
- **Profondeur d'abord (DFS)** : préordre, inordre, postordre
- Utilisation de pointeurs de fonction pour flexibilité

### 3. Propriétés et Vérifications
- Calculs récursifs (hauteur, taille, profondeur)
- Vérifications de propriétés structurelles
- Algorithmes d'équilibrage et de validation

### 4. Relations entre Nœuds
- Navigation parent-enfant
- Relations fraternelles (siblings)
- Relations générationnelles (oncles)

---

## 🧪 Exemples d'Utilisation

### Créer un Arbre Simple
```c
binary_tree_t *root;

root = binary_tree_node(NULL, 98);
root->left = binary_tree_node(root, 12);
root->right = binary_tree_node(root, 402);
root->left->left = binary_tree_node(root->left, 6);
root->left->right = binary_tree_node(root->left, 56);

binary_tree_print(root);
```

### Parcourir un Arbre
```c
void print_num(int n)
{
    printf("%d\n", n);
}

binary_tree_inorder(root, &print_num);
```

### Vérifier les Propriétés
```c
printf("Height: %lu\n", binary_tree_height(root));
printf("Size: %lu\n", binary_tree_size(root));
printf("Is perfect: %d\n", binary_tree_is_perfect(root));
```

---

## 📊 Complexités

| Opération | Arbre Binaire | BST Équilibré | BST Déséquilibré |
|-----------|---------------|---------------|------------------|
| Recherche | O(n) | O(log n) | O(n) |
| Insertion | O(1)* | O(log n) | O(n) |
| Suppression | O(1)* | O(log n) | O(n) |
| Parcours | O(n) | O(n) | O(n) |

*Si la position est connue

---

## 🔗 Ressources Utilisées

- [Binary Tree - Wikipedia](https://en.wikipedia.org/wiki/Binary_tree)
- [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
- [Tree Traversal](https://en.wikipedia.org/wiki/Tree_traversal)
- [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
- [Data Structures: Binary Tree (YouTube)](https://www.youtube.com/watch?v=H5JubkIy_p8)

---

## 🚀 Installation et Test

### Cloner le Dépôt
```bash
git clone https://github.com/SaraEstelle/holbertonschool-binary_trees.git
cd holbertonschool-binary_trees
```

### Compiler un Exemple
```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-binary_tree_node.c 0-main.c -o 0-node
./0-node
```

### Tester Toutes les Fonctions
```bash
# Créer un script de test
for i in {0..18}; do
    gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c ${i}-*.c -o test_${i}
    ./test_${i}
done
```

---

## 👥 Auteurs

**Sara Rebati** 

**Maxim Dutruel**

---

## 📜 Licence

Ce projet a été réalisé dans le cadre du cursus de Holberton School. Tous les droits sont réservés à des fins éducatives.

---

## 🙏 Remerciements

- **Holberton School** pour le projet et les ressources
- **Alexandre Gautier** - Software Engineer à Holberton School
- La communauté Holberton pour le support et l'entraide

---

<div align="center">

**Fait avec ❤️ à Holberton School**

⭐ Si ce projet vous a aidé, n'hésitez pas à lui donner une étoile !

</div>