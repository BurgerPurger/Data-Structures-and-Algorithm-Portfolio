#ifndef LIST_STACK_H
#define LIST_STACK_H

#include <iostream>

template <typename T>
class Node{
public:
    T data{};
    Node<T>* next = nullptr;
};

template <typename T>
Node<T>* head = nullptr;

template <typename T>
void push(T newData){
    Node<T>* newNode = new Node<T>;
    newNode->data = newData;
    newNode->next = head<T>;
    head<T> = newNode;
}

template <typename T>
bool isEmpty(){
    return head<T> == nullptr;
}

template <typename T>
T pop(){
    if(isEmpty<T>()){
        std::cout << "Stack Underflow" << std::endl;
        return T{};
    }

    Node<T>* temp = head<T>;
    T tempVal = temp->data;
    head<T> = head<T>->next;

    delete temp;
    return tempVal;
}

template <typename T>
void Top(){
    if(isEmpty<T>()){
        std::cout << "Stack is Empty" << std::endl;
        return;
    }

    std::cout << "The top is: " << head<T>->data << std::endl;
}

template <typename T>
void display(){
    if(isEmpty<T>()){
        std::cout << "Stack is Empty" << std::endl;
        return;
    }

    Node<T>* temp = head<T>;

    std::cout << "Stack: ";

    while(temp != nullptr){
        std::cout << temp->data << " ";
        temp = temp->next;
    }

    std::cout << std::endl;
}

#endif

