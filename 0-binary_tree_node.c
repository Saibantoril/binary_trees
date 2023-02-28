#include <stdlib.h>

struct binary_tree_s {
    int value;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

struct binary_tree_s *binary_tree_node(struct binary_tree_s *parent, int value) {
    struct binary_tree_s *new_node = malloc(sizeof(struct binary_tree_s));
    if (new_node == NULL) {
        return NULL;
    }

    new_node->value = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

