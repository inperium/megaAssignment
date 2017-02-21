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
    
    ~Array<Type>();
    Array<Type>(const Array<Type> & toBeCopied);
    
    
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
int Array<Type> :: getSize() const
{
    return size;
}

//De-Allocate memory, prevents memory link. Not called by the programmer - happens
//when variable is out of the scope. Count and cout are also temporary.
template <class Type>
Array<Ttype> :: ~Array()
{
    int count = size;
    Node<Type> * remove = front;
    while(front != nullptr)
    {
        front = front ->getnodePointer();
        cout << "Moving to the next node at: " << count << endl;
        remove = front;
        cout << "Moving to new front pointer." << endl;
        count--;
        cout << "Front is at: " << front << " count is: " << cout << endl;
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
            updated->setNodeData(copyTemp->getnodeData());
            updated = copyTemp->getnodePointer();
            copyTemp = copyTemp->getNodePointer;
        }
    }
}

template <class type>
Node<Type> * Array<Type> :: getFront() const
{
    return front;
}
#endif /* Array_h */
