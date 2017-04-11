//
//  Tree.h
//  megaAssignment
//
//  Created by Bowen, Isaac on 4/11/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef Tree_h
#define Tree_h

#include <assert.h>

template <class Type>
class Tree
{
private:
    int height;
    int size;
    bool complete;
    bool balanced;
    
public:
    Tree();
    virtual ~Tree();
    virtual void printToFile() = 0;
    virtual void inOrderTraversal() = 0;
    virtual void preOrderTraversal() = 0;
    virtual void postOrderTraversal() = 0;
    
    int getHeight() const;
    int getSize() const;
    bool isComplete() const;
    bool isBalanced() const;
    
    void setHeight(int height);
    void setSize(int size);
    void setComplete(bool complete);
    void setBalanced(bool balanced);
    
};

template <class Type>
Tree<Type> :: Tree()
{
    hiegiht = 0;
    size = 0;
    balanced = false;
    complete = false;
}

template <class Type>
int Tree<Type> :: getHeight() const
{
    return this->height;
}

template <class Type>
int Tree<Type> :: getSize() const
{
    return this->size;
}

template <class Type>
int Tree<Type> :: isComplete() const
{
    return this->complete;
}

template <class Type>
int Tree<Type> :: isBalanced() const
{
    return this->balanced;
}

template <class Type>
int Tree<Type> :: setHeight() const
{
    this->height = height;
}

template <class Type>
int Tree<Type> :: setSize() const
{
    this->size = size;
}

template <class Type>
int Tree<Type> :: setComplete() const
{
    this->complete = complete;
}

template <class Type>
int Tree<Type> :: setBalanced() const
{
    this->balanced = balanced;
}

#endif /* Tree_h */
