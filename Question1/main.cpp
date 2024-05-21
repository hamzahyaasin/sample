#include <iostream>
#include "BST.h"

int main() {
    
    BST tree;

    
    tree.insert(70); // a1
    tree.insert(60); // a2
    tree.insert(80); // a3
    tree.insert(30); // a6
    tree.insert(62); // a7
    tree.insert(75); // a4
    tree.insert(92); // a8
    tree.insert(61); // a5

    std::cout << "Preorder Traversal:" << std::endl;
    tree.preorder();

    return 0;
}
