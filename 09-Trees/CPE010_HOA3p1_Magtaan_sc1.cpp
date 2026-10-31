#include <iostream>
#include "binaryTree.h"

int main() {
    // Create the root node A
    BinaryTree<char>* root = new BinaryTree<char>('A');

    // Insert B as the first child of A
    root->insertLeft('B');

    // Create a pointer to the newly created node B
    BinaryTree<char>* B = root->getLeftChild();

    // Insert C as the next sibling of B
    B->insertRight('C');
    // Insert D as the next sibling of C
    B->getRightChild()->insertRight('D');
    // Insert E as the next sibling of D
    B->getRightChild()->getRightChild()->insertRight('E');
    // Insert F as the next sibling of E
    B->getRightChild()->getRightChild()->getRightChild()->insertRight('F');
    // Insert G as the next sibling of F
    B->getRightChild()->getRightChild()->getRightChild()->getRightChild()->insertRight('G');

    // Create pointers to the nodes B, C, D, E, F, and G
    BinaryTree<char>* C = B->getRightChild();
    BinaryTree<char>* D = C->getRightChild();
    BinaryTree<char>* E = D->getRightChild();
    BinaryTree<char>* F = E->getRightChild();
    BinaryTree<char>* G = F->getRightChild();

    // Insert H as the first child of D
    D->insertLeft('H');

    // Insert I as the first child of E
    E->insertLeft('I');
    // Create a pointer to the newly created node I
    BinaryTree<char>* I = E->getLeftChild();
    // Insert J as the next sibling of I
    I->insertRight('J');
    // Create a pointer to the newly created node J
    BinaryTree<char>* J = I->getRightChild();

    // Insert K as the first child of F
    F->insertLeft('K');
    // Create a pointer to the newly created node K
    BinaryTree<char>* K = F->getLeftChild();
    // Insert L as the next sibling of K
    K->insertRight('L');
    // Create a pointer to the newly created node L
    BinaryTree<char>* L = K->getRightChild();
    // Insert M as the next sibling of L
    L->insertRight('M');

    // Insert N as the first child of G
    G->insertLeft('N');

    // Insert P as the first child of J
    J->insertLeft('P');
    // Create a pointer to the newly created node P
    BinaryTree<char>* P = J->getLeftChild();
    // Insert Q as the next sibling of P
    P->insertRight('Q');

    // Display the completed general tree
    std::cout << "General Tree:" << std::endl;
    displayTree(root);

    // Traversal Functions
    std::cout << "\nPre-order Traversal: ";
    preorder(root);

    std::cout << "\nIn-order Traversal: ";
    inorder(root);

    std::cout << "\nPost-order Traversal: ";    
    postorder(root);
    
    std::cout << "\nfindData using Pre-order traversal: ";
    if (findData(root, 1, 'H')) {
        std::cout << "H was found!";
    }
    else {
        std::cout << "H was not found!";
    }

    std::cout << "\nfindData using In-order traversal: ";
    if (findData(root, 2, 'P')) {
        std::cout << "P was found!";
    }
    else {
        std::cout << "P was not found!";
    }

    std::cout << "\nfindData using Post-order traversal: ";
    if (findData(root, 3, 'Z')) {
        std::cout << "Z was found!";
    }
    else {
        std::cout << "Z was not found!";
    }

    // Procedure #3.4
    // Insert O as the child of G
    G->insertLeft('O');

    // Find O using the three traversal methods
    G->insertLeft('O');

    std::cout << "\n\nfindData using Pre-order traversal: ";
    if (findData(root, 1, 'O')) {
        std::cout << "O was found!";
    }
    else {
        std::cout << "O was not found!";
    }

    std::cout << "\nfindData using In-order traversal: ";
    if (findData(root, 2, 'O')) {
        std::cout << "O was found!";
    }
    else {
        std::cout << "O was not found!";
    }

    std::cout << "\nfindData using Post-order traversal: ";
    if (findData(root, 3, 'O')) {
        std::cout << "O was found!";
    }
    else {
        std::cout << "O was not found!";
    }
    

    return 0;
}
