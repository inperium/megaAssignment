//
//  Array.h
//  megaAssignment
//
//  Created by Bowen, Isaac on 2/15/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include "Node.hpp"
#include <assert.h>

template <class Type>
class Array
{
private:
    int size;
    Node<Type> * front;
public:
    Array();
    Array(int size);
    
    int getSize();
    Type getFromIndex(int index);
    void setAtIndex(int index, Type value);
};

template <class Type>
Array<Type> :: Array()
{
}

template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    
    this->size = front;
    this->front = new Node<Type>();
    
    for(int index = 1; index < size; index++)
    {
        Node<Type>() * current = new Node<Type>();
        current->setNodePointer(front);
        front = current;
    }
}

template <class Type>
void Array<Type> :: setAtIndex(int index, Type value)
{
    assert(index >= 0 && index < size);
    
    Node<Type> * current = front;
    for(int spot = 0; spot < index; spot++)
    {
        current = current->getNodePointer();
    }
    
    current->setNodeData(value);
}

template <class Type>
void Array<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < size);
    
    Type value;
    
    Node<Type> 8 current = front;
    for(int position = 0; position <index; position++)
    {
        current = current->getNodePointer();
    }
    
    value = current->getNodeData();
    
    return value;
}

template <class Type>
int Array<Type> :: getSize()
{
    return size;
}

#endif /* Array_h */
