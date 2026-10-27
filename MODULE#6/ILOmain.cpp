#include <iostream>
#include <cstdlib> // for generating random
#include <time.h>
#include "node.h"
#include "searchingAlgo.h"

const int maxSize = 50;

int main(){
//ARRAY LINEAR SEARCH TEST
    //generate
    int dataset[maxSize];
    srand(time(0));
    for(int i = 0; i < maxSize; i++){
        dataset[i] = rand();
    }

    for (int i = 0; i < maxSize; i++){
        std::cout << dataset[i] << " ";
    }
    std::cout << std::endl;

    int userInput;
    std::cout << "What number to search?";
    std::cin >> userInput;
    std::cout << "Array result LS: ";
    linearSearch(maxSize, userInput, dataset);

    std::cout << "What number to search?";
    std::cin >> userInput;
    std::cout << "Array result LS: ";
    linearSearch(maxSize, userInput, dataset); 

//LINKED LIST LINEAR SEARCH TEST
    Node<char> *name1 = new_node('D');
    Node<char> *name2 = new_node('Y');
    Node<char> *name3 = new_node('L');
    Node<char> *name4 = new_node('A');
    Node<char> *name5 = new_node('N');

    name1->next = name2;
    name2->next = name3;
    name3->next = name4;
    name4->next = name5;

    Node<char>* current = name1;
    while (current != nullptr) {
    std::cout << current->data << " ";
    current = current->next;
    }
    std::cout << "\n";

    char charInput;
    std::cout << "What character to search?";
    std::cin >> charInput;
    std::cout << "Linked list result LS: ";
    linearSearchLL(name1, charInput);

    std::cout << "What character to search?";
    std::cin >> charInput;
    std::cout << "Linked list result LS: ";
    linearSearchLL(name1, charInput); 

//ARRAY BINARY SEARCH TEST
    int sortedArr[] = {3, 5, 6, 8, 11, 12, 14, 15, 17, 18};
    int arrSize = 10;

    for (int i = 0; i < arrSize; i++) {
        std::cout << sortedArr[i] << " ";
    }
    std::cout << "\n\n";

    // CASE 1: Successful
    std::cout << "Case 1: Search for 8\n";
    binarySearchArr(arrSize, 8, sortedArr);

    // CASE 2: Unsuccessful - smaller than smallest
    std::cout << "Case 2: Search for 2\n";
    binarySearchArr(arrSize, 2, sortedArr);

    // CASE 3: Unsuccessful - larger than largest
    std::cout << "Case 3: Search for 20\n";
    binarySearchArr(arrSize, 20, sortedArr);

//LINKED LIST BINARY SEARCH TEST
    Node<int>* head = new_node(3);
    Node<int>* node2 = new_node(5);
    Node<int>* node3 = new_node(6);
    Node<int>* node4 = new_node(8);
    Node<int>* node5 = new_node(11);

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    Node<int>* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << "\n";

    // CASE 1: Successful
    std::cout << "Case 1: Search for 8\n";
    binarySearchLL(head, 8);
    // CASE 2: Unsuccessful - smaller than smallest
    std::cout << "Case 2: Search for 2\n";
    binarySearchLL(head, 2);
    // CASE 3: Unsuccessful - larger than largest
    std::cout << "Case 3: Search for 15\n";
    binarySearchLL(head, 15); 

    return 0;
}

