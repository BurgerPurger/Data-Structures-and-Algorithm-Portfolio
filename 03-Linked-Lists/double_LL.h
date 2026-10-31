#ifndef DOUBLE_LL_H
#define DOUBLE_LL_H

#include <iostream>

template <typename T>
class DoubleList{
public:
    T data;
    DoubleList<T>* prev;
    DoubleList<T>* next;
};

template <typename T>
DoubleList<T>* createNode(T newData){
    DoubleList<T>* newNode = new DoubleList<T>;

    newNode->data = newData;
    newNode->prev = nullptr;
    newNode->next = nullptr;

    return newNode;
}

template <typename T>
void dllTraverse(DoubleList<T>* currentNode){

    DoubleList<T> *tail;

    // Check if the list is empty
    if(currentNode == nullptr){
        std::cout << "The list is empty";
    }

    // Forward Traversing
    std::cout << "Forward:\n";
    //moves towards the last node
    while(currentNode != nullptr){
        //printed the data
        std::cout << currentNode->data << " ";
        //saved the current node as the last visited node
        tail = currentNode;
        //move to the new node
        currentNode = currentNode->next;
    }
    std::cout<<std::endl;

    // Backward Traversing
    std::cout << "Backward:\n";
    while(tail != nullptr){
        //printed the data
        std::cout << tail->data << " ";
        //move towards the previous node
        tail = tail->prev;
    }
    std::cout << std::endl;
}

template <typename T>
void dllInsertHead(T newData, DoubleList<T>** currentHead){
    //create a node
    DoubleList<T>* newNode = createNode(newData);

    //new node should point to the current head
    newNode->next = *currentHead;

    //current head should point back to the new node
    (*currentHead)->prev = newNode;

    //update the header pointer
    *currentHead = newNode;
}

template <typename T>
void dllInsertEnd(T newData, DoubleList<T> *currentHead){
    //create a new node
    DoubleList<T>* newNode = createNode(newData);

    //traverse to the last node
    while(currentHead->next != nullptr){
        currentHead = currentHead->next;
    }

    //connect the last node to the new node
    currentHead->next = newNode;

    //connect the new node back to the last node
    newNode->prev = currentHead;
}

template <typename T>
void dllInsertAny(T newData, DoubleList<T>** currentHead){

    // Cannot insert after a nulll node
    if(prevnode == nullptr){
        std::cout<<"Previous Node Cannot be Null!";
        return;
    }
    // create a new node
    DoubleList<T>* newNode = createNode(newData);

    //new node points to the  mode after prevNode
    newNode->next = prevNode->next;

    //new node points back to the prevNode
    newNode->prevNode = prevNode;

    //if there is another prevNode, make it point back to new Ndoe
    if(prevNode->next != nullptr){
        prevNode->next->prev = newNode;
    }

    //prevnode now points back to new node
    prevMode->next = newNode;
}

template <typename T>
void dllDelete(int position, DoubleList<T>** currentHead){

    if(*currentHead == nullptr){
        std::cout << "List is empty\n";
        return;
    }

    DoubleList<T>* current = *currentHead;

    // Delete head
    if(position == 0){

        *currentHead = current->next;

        if(*currentHead != nullptr){
            (*currentHead)->prev = nullptr;
        }

        delete current;
        return;
    }

    // Move to the desired node
    for(int i = 0; i < position && current != nullptr; i++){
        current = current->next;
    }

    if(current == nullptr){
        std::cout << "Invalid position\n";
        return;
    }

    // Connect previous node to next node
    current->prev->next = current->next;

    // Connect next node back to previous node
    if(current->next != nullptr){
        current->next->prev = current->prev;
    }

    delete current;
}

#endif