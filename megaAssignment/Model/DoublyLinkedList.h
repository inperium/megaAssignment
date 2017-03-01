//
//  DoublyLinkedList.h
//  megaAssignment
//
//  Created by Bowen, Isaac on 3/1/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h

#include "BiDirectionalNode.hpp"

template <class Type>
class DoublyLinkedList
{
private:
    BiDirectionalNode<Type> * front;
    BiDirectionalNode<Type> * endl;
    int size;
public:
    getSize() const;
    BiDirectionalNode<Type> * getFront() const;
    BiDirectionalNode<Type> * getEnd() const;
};

#endif /* DoublyLinkedList_h */
