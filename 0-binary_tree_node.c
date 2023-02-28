#include <stdio.h>
#include <stdlib.h>

struct binary_tree_t{
    int value;
    struct binary_tree_t *parent;
    struct binary_tree_t *left;
    struct binary_tree_t *right;
};

struct binary_tree_t *binary_tree_node(struct binary_tree_t *parent, int value) {
    struct binary_tree_t *new_node = malloc(sizeof(struct binary_tree_t));
    if (new_node == NULL) {
        return NULL;
    }

    new_node->value = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}
