#ifndef QUEUEARR_H
#define QUEUEARR_H

#include <iostream>

template <typename T>
class queueArr{
    private:
        T* q_array;
        size_t q_capacity;
        size_t q_size;
        int q_front, q_back;

    public:
        queueArr(size_t capacity);
        queueArr(); // Default constructor declaration
        ~queueArr(); // Destructor 

        bool Empty();
        bool Full();
        size_t Size();
        void Clear();

        T Front();
        T Back();
        void Enqueue(T newData); 
        void Dequeue();          

        // Copy Constructor
        queueArr(const queueArr &other);
        
        // Copy Assignment Operator
        queueArr &operator = (const queueArr &other);
};

template <typename T>
queueArr<T>::queueArr(size_t capacity){
    //define capacity of the array
    q_capacity = capacity;

    //set the size to 0
    q_size = 0;

    //set the front and back to 0 and -1 respectively
    q_front = 0;
    q_back = -1;

    //allocate a new space for the q_array that was created
    q_array = new T[q_capacity];
    std::cout<<"Constructor was called\n";
}

template <typename T>
bool queueArr<T>::Empty(){
    return q_size == 0;
}

template <typename T>
bool queueArr<T>::Full(){
    return q_size == q_capacity;
}

template <typename T>
size_t queueArr<T>::Size(){
    return q_size;
}

// Implemented default constructor
template <typename T>
queueArr<T>::queueArr(){
    q_capacity = 10; // Default capacity
    q_size = 0;
    q_front = 0;
    q_back = -1;
    q_array = new T[q_capacity];
    std::cout<<"Default Constructor was called\n";
}

template <typename T>
queueArr<T>::~queueArr(){
    delete[] q_array;
    std::cout<<"Destructor was called\n";
}

// Copy Constructor Implementation
template <typename T>
queueArr<T>::queueArr(const queueArr &other){
    q_capacity = other.q_capacity;
    q_size = other.q_size;
    q_front = other.q_front;
    q_back = other.q_back;

    // Copy of the array
    q_array = new T[q_capacity];
    for (size_t i = 0; i < q_capacity; ++i) {
        q_array[i] = other.q_array[i];
    }
    std::cout<<"Copy Constructor was called\n";
}

// Copy Assignment Operator Implementation
template <typename T>
queueArr<T> &queueArr<T>::operator = (const queueArr &other){
    if (this == &other) {
        return *this; // Handle self-assignment
    }

    // Free existing memory
    delete[] q_array;

    // Copy fields
    q_capacity = other.q_capacity;
    q_size = other.q_size;
    q_front = other.q_front;
    q_back = other.q_back;

    // Allocate new memory and copy elements
    q_array = new T[q_capacity];
    for (size_t i = 0; i < q_capacity; ++i) {
        q_array[i] = other.q_array[i];
    }

    std::cout<<"Copy Assignment Operator was called\n";
    return *this;
}

// Fixed return type from size_t to void and removed invalid return statement
template <typename T>
void queueArr<T>::Clear(){
    q_size = 0;
    q_front = 0;
    q_back = -1;
}

template <typename T>
T queueArr<T>::Front(){
    //check if the queue is empty
    if(Empty()){
        std::cout <<"The Queue is Empty\n";
        return T{};
    }

    //return the front of the queue
    return q_array[q_front];
}

template <typename T>
T queueArr<T>::Back(){
    //check if the queue is empty
    if(Empty()){
        std::cout <<"The Queue is Empty\n";
        return T{};
    }

    //return the front of the queue
    return q_array[q_back];
}

template <typename T>
void queueArr<T>::Enqueue(T newData){
    //check if full
    if(Full()){
        std::cout<<"Queue is full"<<std::endl;
        return;
    }

    //compute for the back index
    q_back = (q_back + 1) % q_capacity;
    //store the newData to the back of the queue
    q_array[q_back] = newData;
    //increment size
    q_size++;
}

template <typename T>
void queueArr<T>::Dequeue(){
    //check if full
    if(Empty()){
        std::cout<<"Queue is empty"<<std::endl;
        return;
    }
    //compute for back index
    q_front = (q_front + 1) % q_capacity;

    //decrement size
    q_size--;

    //what will happen if the queue becomes empty
    if(q_size == 0){
        q_front = 0;
        q_back = -1;
    }
}

#endif