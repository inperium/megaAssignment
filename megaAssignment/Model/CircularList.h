//
//  CircularList.h
//  megaAssignment
//
//  Created by Bowen, Isaac on 3/1/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

template <class Type>
class CircularList : DoublyLinkedList<Type>
{
private:
    BiDirectionalNode<Type> * findNode(int index);
public:
    CircularList();
    ~CircularList();
    
    void add(Type data);
    Type remove(int index);
    Type getFromIndex(int index);
    Type seAtIndex(int index, Type data);
};

template <class Type>
CircularList<Type> :: CircularList() : DoublyLinkedList<Type>()
{
}

template <class Type>
CircularList<Type> :: ~CircularList()
{
    BiDirectionalNode<Type> * remove = this->getFrot();
    while(this->getFront() != nullptr)
    {
        this->setFront(this->getFront()->getNextPointer());
        delete remove;
        remove = this->getFront();
    }
}

template <class Type>
BiDirectionalNode<Type>* CircularList<Type>:: findNode(int index)
{
    BiDirectionalNode<Type>nodeToFind;
    if(index < this->getSize() /2)
    {
        nodeToFind = this->getFront();
        for(int spot = 0; spot < index; spot++)
        {
            nodeToFind = nodeToFind->getNextPointer();
        }
    }
    else
    {
        nodeToFind = this->getEnd();
        for(int spot = this->getSize() - 1; spot > index; spot--)
        {
            nodeToFind = nodeToFind->getPreviousPointer();
        }
    }
}

template <class Type>
void CircularList<Type> :: add(Type data)
{
}


#endif /* CircularList_h */
