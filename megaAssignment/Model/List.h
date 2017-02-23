//
//  List.h
//  megaAssignment
//
//  Created by Bowen, Isaac on 2/21/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef List_h
#define List_h
#include <assert.h>

template <class Type>
class List
{
private:
    int size;
    Node<Type> * front;
public:
    List<Type>();
    List<Type>(const List<Type>&source);
    ~List<Type>();
    List<Type>& operator = (const List<Type> & replacing);
    
    int getSize(const);
    Node<Type> * getFront() const;
    Node<Type> * getEnd() const;
    
    void addAtIndex(int index, Type value);
    void addFront(Type value);
    void addEnd(Type value);
    Type remove(int index);
    Type setAtIndex(int index, Type data);
    Type getFromIndex(int index, Type data);
    bool contains(Type data);
};

template <class Type>
List<Type> :: List()
{
}

template <class Type>
void List<Type> :: addFront(Type value)
{
    if(size ==0)
    {
        Node<Type> * newFirst = new Node<Type>();
        this->front = first;
        this-> first;
    }
    else
    {
        Node<Type> * newFirst = new Node<Type.(value, front);
        this->front = newFirst;
    }
    
    size++;
}

template <class Type>
void List<Type> :: addFront(Type value)
{
    Node<Type> * added = new Node<Type>(data);
    if(size ==0)
    {
        this->front = added;
        this-end = added;
    }
    else
    {
        end->setNodePointer(added);
        this->end = added;
    }
    
    size++;
}

template <class Type>
void List<Type> :: addFront(Type value)
{
    assert (index >= 0 && index <= size);
    if(index == 0)
    {
        addFront(value);
    }
    else if(index == size)
    {
        addEnd(value);
    }
    
    else{
        Node<Type> * insertedNode = new Node<Type>(value);
        Node<Type> * current = front;
        Node<Type> * previous = nullptr;
    }
    
    size++;
}

#endif /* List_h */
