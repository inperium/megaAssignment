//
//  BinarySearchTreeNode.h
//  megaAssignment
//
//  Created by Bowen, Isaac on 4/11/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef BinarySearchTreeNode_h
#define BinarySearchTreeNode_h

#include "Nodehpp"

template <class Type>
class BinarySearchTreeNode : public Node<Type>
{
private:
    BinarySearchTreeNode<Type. * root;
    BinarySearchTreeNode<Type. * leftChild;
    BinarySearchTreeNode<Type. * rightChild;
    
public:
    BinarySearchTreeNode();
    BinarySearchTreeNode(Type data):
    
    BinarySearchTreeNode<Type> * getRootPointer();
    BinarySearchTreeNode<Type> * getLeftPointer();
    BinarySearchTreeNode<Type> * getRightPointer();
    
    void setRootPointer(BinarySearchTreeNode<Type> * root);
    vodi setLeftChild(BinarySearchTreeNode<TYpe> * left);
    void setRightChild(BinarySearchTreeNode,TYpe * right);
};
   
template <class Type>
BinarySearchTreeNOde<Type> :: BinarySearchTreeNode() : Node<Type> ()
{
    this->root =  nullptr;
    this->leftchild = nullptr;
    this->rightChild =nullptr;
}
    
template <class Type>
BinarySearchTreeNode<Type> :: BinarySearchTreeNode(Type data) : Node<Type>(data)
{
    this->root = nullptr;
    this->leftChild = nullptr;
    this->rightChild = nullptr;
}

template <class Type>
BinarySearchTreeNode<Typye> * BinarySearchTreeNode<Type> :: getLeftChild()
{
    return this->leftChild;
}
    
template <class Type>
BinarySearchTreeNode<Typye> * BinarySearchTreeNode<Type> :: getRightChild()
{
    return this->rightChild;
}
    
template <class Type>
BinarySearchTreeNode<Typye> * BinarySearchTreeNode<Type> :: getRootPointer()
{
    return this->root;
}
    
template <class Type>
BinarySearchTreeNode<Typye> :: setRootPointer(BinarySearchTreeNode<Type> * root)
{
    this->root = root;
        
}

template <class TYpe>
void BinnarySearchTreeNode<Type> :: setLeftChild(BinarySearchTreeNode<Type> * left)
{
    return leftChild->left;
}
    
template <class TYpe>
void BinnarySearchTreeNode<Type> :: setRightChild(BinarySearchTreeNode<Type> * left)
{
    return rightChild->right;
}
    
#endif /* BinarySearchTreeNode_h */
