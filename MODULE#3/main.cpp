#include <iostream>
#include "double_LL.h"

int main(){

    DoubleList<char>* head = createNode('C');
    DoubleList<char>* second = createNode('P');
    DoubleList<char>* third = createNode('E');

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    std::cout<<"Traversal Testing: \n";
    dllTraverse(head);

    std::cout<<"\nInsert Head Testing: \n";
    dllInsertHead('X', &head);
    dllTraverse(head);
    
    std::cout<<"\nInsert End Testing: \n";
    dllInsertEnd('1', head);
    dllTraverse(head);  

    std::cout<<"\nInsert at any node Testing: \n";
    dllInsertAny('2', head->next->next);
    dllTraverse(head);

    std::cout<<"\nDelete Node Testing: \n";
    dllDelete(2, &head);
    dllTraverse(head);  

    return 0;
}