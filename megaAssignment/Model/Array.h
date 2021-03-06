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
#include <iostream>
using namespace std;

template <class Type>
class Array
{
private:
    int size;
    Node<Type> * front;
public:
    Array();
    Array(int size);
    
    ~Array<Type>();
    Array<Type>(const Array<Type> & toBeCopied);
    
    
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type value);
    Node<Type> * getFront() const;
    int  nextIndexOf(Type value, int position);
    int indexOf(Type findMe);
};

template <class Type>
Array<Type> :: Array()
{
}

template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    
    this->size = size;
    this->front = new Node<Type>();
    
    for(int index = 1; index < size; index++)
    {
        Node<Type> * current = new Node<Type>();
        current->setNextPointer(front);
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
        current = current->getNextPointer();
    }
    
    current->setNodeData(value);
}

template <class Type>
Type Array<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < size);
    
    Type value;
    
    Node<Type> * current = front;
    for(int position = 0; position <index; position++)
    {
        current = current->getNextPointer();
    }
    
    value = current->getNodeData();
    
    return value;
}

template <class Type>
int Array<Type> :: getSize() const
{
    return size;
}

//De-Allocate memory, prevents memory link. Not called by the programmer - happens
//when variable is out of the scope. Count and cout are also temporary.
template <class Type>
Array<Type> :: ~Array()
{
    int count = size;
    Node<Type> * remove = front;
    while(front != nullptr)
    {
        front = front ->getNextPointer();
        cout << "Moving to the next node at: " << count << endl;
        remove = front;
        cout << "Moving to new front pointer." << endl;
        count--;
        cout << "Front is at: " << front << " count is: " << count << endl;
    }
}

template <class Type>
Array<Type> :: Array(const Array<Type> & toBeCopied)
{
    this->size = toBeCopied.getSize();
    
    this->front = new Node<Type>();
    for(int index = 1; index < size; index++)
    {
        Node<Type> * copyTemp = toBeCopied.getFront();
        Node<Type> * updated = this->front;
        for(int index = 0; index < size; index++)
        {
            updated->setNodeData(copyTemp->getNodeData());
            updated = copyTemp->getNextPointer();
            copyTemp = copyTemp->getNextPointer();
        }
    }
}

template <class Type>
Node<Type> * Array<Type> :: getFront() const
{
    return front;
}

template <class Type>
int Array<Type> :: nextIndexOf(Type value, int position)
{
    assert(position >= 0 && position <this->getSize());
    
    int nextIndex = -1;
    
    Node<Type> * current = this->getFront();
    
    for(int index = 0; index < this->getSize();index++)
    {
        if(index >= position)
        {
            if(current->getNodeData() == value)
            {
                return index;
            }
        }
        current = current->getNextPointer();
    }
    current = current->getNextPointer();
    return nextIndex;
}

template <class Type>
int Array<Type> :: indexOf(Type findMe)
{
    int index = -1;
    
    Node <Type> * searchPointer = this->getFront();
    
    for (int spot = 0; spot < this->getSize(); spot++)
    {
        if(findMe == searchPointer->getNodeData())
        {
            return spot;
        }
        searchPointer = searchPointer->getNextPointer();
    }
    
    return index;
}

#endif /* Array_h */
