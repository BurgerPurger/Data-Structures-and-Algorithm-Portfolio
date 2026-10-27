#include <iostream>
#include "queueLL.h"

int main(){
    qNode<char> *front = nullptr;
    qNode<char> *back = nullptr;

    enqueue('D', &front, &back);
    enqueue('Y', &front, &back);
    enqueue('L', &front, &back);
    enqueue('A', &front, &back);
    enqueue('N', &front, &back);
    
    std::cout<<"Initial Queue: ";
    displayQ(&front, &back);

    std::cout <<"Dequeuing\n";
    dequeue(&front, &back);

    std::cout << "Showing New Front: " << showFront(&front) <<'\n';
    std::cout << "Showing New Back: " << showBack(&back) <<'\n';

    std::cout<<"Showing New Queue: ";
    displayQ(&front, &back);

    return 0;
}

