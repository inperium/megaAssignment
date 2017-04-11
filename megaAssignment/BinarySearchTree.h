//
//  BinarySearchTree.h
//  megaAssignment
//
//  Created by Bowen, Isaac on 4/11/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "Node.hpp"

template <class Type>
class BinarySearchTreeNode : public Node<Type>
{
private:
    BinarySearchTreeNode<Type> * root;
    BinarySearchTreeNode<Type> * leftChild;
    BinarySearchTreeNode<Type> * rightChild;
    
public:
    BinarySearchTreeNode();
    BinarySearchTreeNode(Type data);
    
    BinarySearchTreeNode<Type> * getRootPointer();
    BinarySearchTreeNode<Type> * getLeftPointer();
    BinarySearchTreeNode<Type> * getRightPointer();
    
    void setRootPointer(BinarySearchTreeNode<Type> * root);
    void setLeftChild(BinarySearchTreeNode<Type> * left);
    void setRightChild(BinarySearchTreeNode<Type> * right);
};

template<class Type>
BinarySearchTreeNode<Type>::BinarySearchTreeNode()
{
    this->setNodeData(nullptr);
    this->root = nullptr;
    this->leftChild = nullptr;
    this->rightChild = nullptr;
}

template<class Type>
BinarySearchTreeNode<Type>::BinarySearchTreeNode(Type data) :
Node<Type>(data)
{
    this->root = nullptr;
    this->leftChild = nullptr;
    this->rightChild = nullptr;
}

template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTreeNode<Type> :: getRootPointer()
{
    return root;
}

template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTreeNode<Type> :: getLeftPointer()
{
    return leftChild;
}

template<class Type>
BinarySearchTreeNode<Type> * BinarySearchTreeNode<Type> :: getRightPointer()
{
    return rightChild;
}

template<class Type>
void BinarySearchTreeNode<Type> :: setRootPointer(BinarySearchTreeNode<Type> * root)
{
    this -> root = root;
}

template <class Type>
void BinarySearchTreeNode<Type> :: setLeftChild(BinarySearchTreeNode<Type> * left)
{
    this->leftChild = left;
}

template <class Type>
void BinarySearchTreeNode<Type> :: setRightChild(BinarySearchTreeNode<Type> * right)
{
    this->rightChild = right;
}
#endif /* BinarySearchTree_h */
