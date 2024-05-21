#ifndef BST_H
#define BST_H

#include "TreeNode.h"

class BST {
private:
    TreeNode* root;

        TreeNode* insert(TreeNode* node, int value, TreeNode* parent) {
        if (node == nullptr) {
            return new TreeNode(value, nullptr, nullptr, parent);
        }
        if (value < node->getValue()) {
            node->setLeft(insert(node->getLeft(), value, node));
        } else {
            node->setRight(insert(node->getRight(), value, node));
        }
        return node;
    }

    void preorder(TreeNode* node) const {
        if (node != nullptr) {
            node->display();
            preorder(node->getLeft());
            preorder(node->getRight());
        }
    }

public:
    BST() : root(nullptr) {}

    void insert(int value) {
        root = insert(root, value, nullptr);
    }

    void preorder() const {
        preorder(root);
    }
};

#endif 
