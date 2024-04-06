#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t* tree)
{
    size_t l = 0, r = 0;
    
    if (tree != NULL) {
        if (tree->left != NULL) {
            l = 1 + binary_tree_height(tree->left);
        }
        
        if (tree->right != NULL) {
            r = 1 + binary_tree_height(tree->right);
        }
        
        if (l > r) {
            return l;
        } else {
            return r;
        }
    }
    
    return 0; // If the tree is empty, return 0
}

