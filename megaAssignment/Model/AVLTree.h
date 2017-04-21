//
//  AVLTree.h
//  megaAssignment
//
//  Created by Bowen, Isaac on 4/19/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef AVLTree_h
#define AVLTree_h

#include "BinarySearchTreeNode.hpp"
#include "BinarySearchTreehpp"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    
    BinarySearchTreeNode<Type> * leftRotation (BinarySearchTreeNode<Type> * parent);
    BinarySearchTreeNode<Type> * rightRotation (BinarySearchTreeNode<Type> * parent);
    BinarySearchTreeNode<Type> * leftRightRotation (BinarySearchTreeNode<Type> * parent);
    BinarySearchTreeNode<Type> * rightLeftRotation (BinarySearchTreeNode<Type> * parent);
    
    BinarySearchTreeNode<Type> * balanceSubtree (BinarySearchTreeNode<Type> * parent);
    
    BinarySearchTreeNode<Type> * insertNode(BinarySearchTreeNode<Type> * parent);
    BinarySearchTreeNode<Type> * removeNode(BinarySearchTreeNode<Type> * parent);
    
    int heightDifference(BinarySearchTreeNode<Type> * parent);
    
public:
    
    AVLTree();
    ~AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
}

template <class Type>
int AVLTree<Type> :: heightDifference(BinarySearchtreeNode<Type> * node)
{
    int balance;
    int leftHeight = this->calculateHeight(node->getLeftChild());
    int rightHeight = this->calculateHeight(node->getRightChild());
    balance = leftHeight-rightHeight;
    return balance;
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: leftRotation (BinarySearchTreeNode<Type> * parent)
{
    BinarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getLeftChild();
    
    parent->setLeftChild(changedNode->getRightChild());
    
    changedNode->setRightChild(Parent);
                         
    return changedNode;
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: rightRotation (BinarySearchTreeNode<Type> * parent)
{
    BinarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getRightChild();
        
    parent->setRightChild(changedNode->getRightChild());
                             
    changedNode->setLeftChild(Parent);
                             
    return changedNode;
}
    
template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: rightLeftRotation (BinarySearchTreeNode<Type> * parent)
{
    BinarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getRightChild();
        
    parent->setRightChild(leftRotation(changedNode));
                              
    return rightRotation(parent);
}


template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: leftRightRotation (BinarySearchTreeNode<Type> * parent)
{
    BinarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getLeftChild();
    
    parent->setLeftChild(rightRotation(changedNode));
    
    return leftRotation(parent);
}

template <class Type>
BinarySearchTreeNode<Type> * AVL<Type> :: balanceSubTree(BinarySearchTreeNode<Type> * parent)
{
    int balanceFactor = heightDifference(parent);
    
    if(balanceFactor > 1)
    {
        if(heightdifference(parent->getLeftchild()) > 0)
        {
            parent = leftRotation(parent);
        }
        else
        {
            parent = leftRightRotation(parent);
        }
    }
    else if(balanceFactor < -1)
    {
        if(heightDifference(parent->getRightChild()) > 0)
        {
            parent = rightLeftRotation(parent);
        }
        else
        {
            parent = rightRotation(parent);
        }
    }
    return parent;
}

template <class Type>
AVLTree<Type> :: AVLTree() : BinarySearchTree<Type>()
{
    this->root = nullptr;
}

template <class Type>
AVLTree<Type> :: ~AVLTree()
{
    delete this->getRoot();
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: removeNode(BinarySearchTreeNode<Type> * parent, Type inserted)
{
    
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: insertNode(BinaryySearchTreeNode<Type> * parent, Type inserted)
{
    if(parent == nullptr)
    {
        parent = new BinarySearchtreeNode<Type>(inserted);
        return parent;
    }
    else if(inserted < parent->getNodeData())
    {
        parent->setleftChild(insertNode(parent->getLeftChild(), inserted));
        parent = balancedSubTree(parent);
    }
    else if(inserted > parent->getNodeData())
    {
        parent->setRightChild(insertNode(parent->getRightChild(), inserted));
        parent = balanceSubTree(parent);
    }
    
    return parent;
}

template <class Type>
void AVLTree<Type> insert(Type item)
{
    insertNode(this->getRoot(), item);
}

template <class Type>
void AVLTree<Type> remove(Type item)
{
    removeNode(this->getRoot(), item);
}

#endif /* AVLTree_h */
