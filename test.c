#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree) {
    if (tree == NULL) {
        return 0;
    }

    size_t left_depth = binary_tree_depth(tree->left);
    size_t right_depth = binary_tree_depth(tree->right);

    return (left_depth > right_depth) ? (left_depth + 1) : (right_depth + 1);
}

