#include "node.h"

#ifndef SEARCHINGALGO_H
#define SEARCHINGALGO_H

template <typename T>
void linearSearch(int arrSize, T dataFind, T list[]){
    //Step 1: I =0;
    int i = 0;
    //Repeat while I <= n
    while(i < arrSize){
        // If (item=data[i])
        if(dataFind == list[i]){
            //Print searching is successful
            std::cout << "Searching is successful\n";
            return;
        }
        i++;
    }
    //Print "Searching is unsuccessful"
    std::cout << "Searching is unsuccessful\n";
};

template <typename T>
void linearSearchLL(Node<T>* head, T dataFind){

    while(head != nullptr){
        if(dataFind == head->data){
            std::cout << "Searching is successful\n";
            return;
        }
        head = head->next;
    }
    std::cout << "Searching is unsuccessful\n";
};

template <typename T>
Node<T>* getMiddle(Node<T>* start, Node<T>* last){
    Node<T>* slow = start;
    Node<T>* fast = start;

    while(fast != last && fast->next != last){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

template <typename T>
void binarySearchLL(Node<T>* head, T dataFind){
    Node<T>* start = head;
    Node<T>* last = nullptr;

    while(start!= last){
        Node<T>* middle = getMiddle(start, last);

        if(middle == nullptr){
            std::cout << "Searching is unsuccessful\n";
            return;
        }
        if(middle->data == dataFind){
            std::cout << "Searching is successful\n";
            return;
        }
        else if(middle->data < dataFind){
            start = middle->next;
        }
        else if(middle->data > dataFind){
            last = middle;
        }
    }
    // Search range became empty
    std::cout << "Searching is unsuccessful\n";
};

template <typename T>
void binarySearchArr(int arrSize, T dataFind, T list[]){
    int low = 0;
    int up = arrSize - 1;
    int middle;

    while(low <= up){
        int middle = (low + up)/ 2;

        if(list[middle] == dataFind){
            std::cout << "Searching is successful\n";
            return;
        }
        else if(list[middle] < dataFind){
            low = middle + 1;
        }
        else if(list[middle] > dataFind){
            up = middle - 1;
        }
    }
    std::cout << "Searching is unsuccessful\n";
};

template <typename T>
int countOccurrences(T arr[], int size, T dataFind) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == dataFind) {
            count++;
        }
    }
    return count;
}

template <typename T>
void binarySearchDemo(T arr[], int size, T dataFind) {
    int low = 0;
    int up = size - 1;
    int iteration = 1;

    while (low <= up) {
        int middle = (low + up) / 2;

        std::cout << "\nIteration " << iteration << "\n";
        std::cout << "Low = " << arr[low] << "\n";
        std::cout << "Middle = " << arr[middle] << "\n";
        std::cout << "Up = " << arr[up] << "\n";

        if (arr[middle] == dataFind) {
            std::cout << "Searching is successful\n";
            return;
        }
        else if (arr[middle] < dataFind) {
            low = middle + 1;
        }
        else {
            up = middle - 1;
        }
        iteration++;
    }
    std::cout << "Searching is unsuccessful\n";
}

template <typename T>
bool binarySearchRecursive(T arr[], int low, int up, T dataFind){
    if (low > up) {
        return false;
    }
    int middle = (low + up) / 2;

    std::cout << "Low = " << arr[low]
              << " | Middle = " << arr[middle]
              << " | Up = " << arr[up] << "\n";

    if (arr[middle] == dataFind) {
        return true;
    }
    if (dataFind < arr[middle]) {
        return binarySearchRecursive(arr, low, middle - 1, dataFind);
    }
    return binarySearchRecursive(arr, middle + 1, up, dataFind
    );
}

#endif