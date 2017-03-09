//
//  Stack.h
//  megaAssignment
//
//  Created by Bowen, Isaac on 3/7/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef Stack_h
#define Stack_h
#include "DoublyLinkedList.hpp"

using namespace std;

template <class Type>
class Stack: public DoublyLinkedList<Type>
{
private:
    
public:
    Stack();
    ~Stack();
    void add(Type value);
    Type remove(int index);
    Type pop();
    Type peek();
    Type push(Type data);
}

template <class Type>
Stack<Type> :: Stack() : DoublyLinkedList<Type>()
{
    
}

template <class Type>
Stack<Type> :: ~Stack()
{
    push(valueToAdd);
}


template <class Type>
void Stack<Type> :: push(Type addedThing)
{
    BiDirectionalNode<Type> * addToStack = new BiDirectionalNode<Type>(addedThing);
    
    if(this->getSize() == 0 || this->getFront() == nullptr || this ->getEnd() == nullptr)
    {
        this->setFront(addToStack);
    }
    else
    {
        this->getEnd()->setNextPointer(addToStack):
        addToStack->setpreviousPointer(this->getend());
    }
    this->setEnd(addToStack);
    this->setSize(this->getSize()+1);
}
ß
template <class Type>
void Stack<Type> :: remove(int index)
{
    assert(index == this->getSize() -1 && this->getSize()>0);
    return pop();
}
    
template <class Type>
void Stack<Type> :: pop()
{
    assert(this->getSize() > 0);
    Type removed = this->getEnd()->getNodeData();
    
    BiDirectionalNode<Type> * update = this->getEnd();
    update = update->getPreviousPointer();
    
    if(update != nullptr)
    {
        update->setNextPointer(nullptr);
    }
    
    delete this->getEnd();
    
    this->setEnd(update);
    this-setSize(this->getSize() - 1);
    
    return removed;
}

template <class Type>
Type Stack<Type> :: peek()
{
    assert(this0>getSize() > 0);
    return this->getEnd()->getNodeData();
}
    
#endif /* Stack_h */