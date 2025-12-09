<p align="center">
  <img width="400px" height="400px" src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/C_Programming_Language.svg/695px-C_Programming_Language.svg.png" alt="Project logo">
</p>

<h3 align="center">Holbertonschool Binary Trees</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]() [![GitHub Issues](https://img.shields.io/github/issues/SaraEstelle/holbertonschool-binary_trees.svg)](https://github.com/SaraEstelle/holbertonschool-binary_trees/issues) [![GitHub Pull Requests](https://img.shields.io/github/issues-pr/SaraEstelle/holbertonschool-binary_trees.svg)](https://github.com/SaraEstelle/holbertonschool-binary_trees/pulls) [![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="left">
Implementation of Binary Trees and Binary Search Trees (BST) in C.
</p>

## 📝 Table of Contents

- [About](#about)
- [Project Description](#project_description)
- [Data Structures](#data_structures)
- [File Structure](#file_structure)
- [Getting Started](#getting_started)
- [Compilation](#compilation)
- [Usage](#usage)
- [Code Examples](#examples)
- [Built Using](#built_using)
- [Authors](#authors)
- [Acknowledgments](#acknowledgement)

## 🧐 About <a name = "about"></a>

This project is a complete implementation of **Binary Trees** in C. The main objective is to understand the details, advantages, and disadvantages of using trees as data structures. This project was developed as part of the Holberton School curriculum and demonstrates a deep understanding of:

- Dynamic memory allocation (malloc, free)
- Pointers and structures
- Recursion algorithms
- Tree traversal methods (Pre-order, In-order, Post-order)
- Tree properties (Height, Depth, Balance factor)

## 📖 Project Description <a name = "project_description"></a>

A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child.

### Project Objectives:

- Create and manipulate binary trees
- Implement tree traversals
- Measure tree properties (height, depth, size, leaves)
- Check tree status (full, perfect, balanced)
- Follow Holbertonschool coding standards (Betty)

## 🌳 Data Structures <a name = "data_structures"></a>

We use the following data structure to represent a binary tree node:

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

----

📁 File Structure <a name = "file_structure"></a>
Plaintext

holbertonschool-binary_trees/
├── tests/                  # Contains all main.c test files
│   ├── 0-main.c
│   ├── 1-main.c
│   └── ...
├── binary_trees.h          # Header file containing prototypes and structs
├── 0-binary_tree_node.c
├── 1-binary_tree_insert_left.c
├── 2-binary_tree_insert_right.c
├── 3-binary_tree_delete.c
├── 4-binary_tree_is_leaf.c
├── 5-binary_tree_is_root.c
├── 6-binary_tree_preorder.c
├── 7-binary_tree_inorder.c
├── 8-binary_tree_postorder.c
├── 9-binary_tree_height.c
├── 10-binary_tree_depth.c
├── 11-binary_tree_size.c
├── 12-binary_tree_leaves.c
├── 13-binary_tree_nodes.c
├── 14-binary_tree_balance.c
├── 15-binary_tree_is_full.c
├── 16-binary_tree_is_perfect.c
├── 17-binary_tree_sibling.c
├── 18-binary_tree_uncle.c
├── binary_tree_print.c     # Helper function to visualize trees
└── README.md


🏁 Getting Started <a name = "getting_started"></a>
These instructions will allow you to get a copy of the project running on your local machine for development and testing.

Prerequisites
What you need to install to run the software:

gcc (GNU Compiler Collection) - C Compiler
git - Version control system
Installing
Steps to install and configure the development environment:

Step 1: Clone the repository

Bash

git clone [https://github.com/SaraEstelle/holbertonschool-binary_trees.git](https://github.com/SaraEstelle/holbertonschool-binary_trees.git)
cd holbertonschool-binary_trees
Step 2: Verify the project structure

Bash

ls -la
🔨 Compilation <a name = "compilation"></a>
The code is compiled using gcc with specific flags. Since the main.c files are located in the tests/ directory, you must include the path when compiling.

Generic compilation command:
Bash

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c tests/<TEST_FILE> <SOURCE_FILES> -o <OUTPUT_NAME>
Explanation of flags:

-Wall : Enable all standard warnings

-Wextra : Enable additional warnings

-Werror : Treat warnings as errors

-pedantic : Force strict compliance with C standard

🎈 Usage <a name = "usage"></a>
Here is how to run a specific task (e.g., Task 0 - New Node).

1. Compile the task
Bash

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c tests/0-main.c 0-binary_tree_node.c -o 0-node
2. Run the executable
Bash

./0-node
💻 Code Examples <a name = "examples"></a>
Example 1: Creating a simple tree
C

binary_tree_t *root;

/* Create root node */
root = binary_tree_node(NULL, 98);

/* Create children */
root->left = binary_tree_node(root, 12);
root->right = binary_tree_node(root, 402);
Example 2: Traversing a tree (Pre-order)
C

void print_num(int n)
{
    printf("%d\n", n);
}

/* Traverse the tree */
binary_tree_preorder(root, &print_num);
Example 3: Checking if a node is a leaf
C

if (binary_tree_is_leaf(root->right))
    printf("The right node is a leaf\n");
⛏️ Built Using <a name = "built_using"></a>
C - Programming language

GCC - GNU C Compiler

Git - Version control system

Ubuntu - Operating System

Betty - Coding style

✍️ Authors <a name = "authors"></a>
Sara Rebati - @SaraEstelle

Maxim Dutruel - @maxim880000

🎉 Acknowledgements <a name = "acknowledgement"></a>
Holberton School for the project subject and resources.

The C community for documentation and support.

Special thanks to our peers for code reviews.

📞 Support
If you have any questions or issues, feel free to:

Open an issue

Contact the authors via GitHub

Last Updated: December 2025 Status: Active
