#ifndef TREENODE_H
#define TREENODE_H

#include <iostream>

class TreeNode {
private:
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode* parent;

public:
    TreeNode(int val, TreeNode* l = nullptr, TreeNode* r = nullptr, TreeNode* p = nullptr)
        : value(val), left(l), right(r), parent(p) {}

    int getValue() const { return value; }
    TreeNode* getLeft() const { return left; }
    TreeNode* getRight() const { return right; }
    TreeNode* getParent() const { return parent; }

    void setValue(int val) { value = val; }
    void setLeft(TreeNode* l) { left = l; }
    void setRight(TreeNode* r) { right = r; }
    void setParent(TreeNode* p) { parent = p; }

    void display() const {
        std::cout << "Node Value: " << value << std::endl;
        std::cout << "Left Child: " << (left ? std::to_string(left->value) : "None") << std::endl;
        std::cout << "Right Child: " << (right ? std::to_string(right->value) : "None") << std::endl;
        std::cout << "Parent: " << (parent ? std::to_string(parent->value) : "None") << std::endl;
    }
};

#endif 
