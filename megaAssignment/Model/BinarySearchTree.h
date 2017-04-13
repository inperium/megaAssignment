//
//  BinarySearchTree.h
//  megaAssignment
//
//  Created by Bowen, Isaac on 4/11/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "BinarySearchTreeNode.h"
#include "Tree.h"

template<class Type>
class BinarySearchTree: public Tree<Type>
{
private:
    BinarySearchTreeNode<Type> * root;
    int calculateSize(BinarySearchTreeNode<Type> * start);
    void inOrderTraversal(BinarySearchTreeNode<Type> * root);
    void preOrderTraversal(BinarySearchTreeNode<Type> * root);
    void postOrderTraversal(BinarySearchTreeNode<Type> * root);
    
    void removeNode(BinarySearchTreeNode<Type> * & removeMe);
public:
    BinarySearchTree();
    ~BinarySearchTree();
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    BinarySearchTreeNode<Type> * getRoot();
    void setRoot(BinarySearchTreeNode<Type> * root);
    void printToFile();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type valueRemoved);
};

template<class Type>
BinarySearchTree<Type>::BinarySearchTree() :
Tree<Type>()
{
    root = nullptr;
}

template<class Type>
BinarySearchTree<Type>::~BinarySearchTree()
{
    
}

template<class Type>
void BinarySearchTree<Type>::printToFile()
{
    
}

template<class Type>
void BinarySearchTree<Type>::inOrderTraversal()
{
    
}

template<class Type>
void BinarySearchTree<Type>::preOrderTraversal()
{
    
}

template<class Type>
void BinarySearchTree<Type>::postOrderTraversal()
{
    
}

template<class Type>
void BinarySearchTree<Type>::inOrderTraversal(BinarySearchTreeNode<Type> * root)
{
    
}

template<class Type>
void BinarySearchTree<Type>::preOrderTraversal(BinarySearchTreeNode<Type> * root)
{
    
}

template<class Type>
void BinarySearchTree<Type>::postOrderTraversal(BinarySearchTreeNode<Type> * root)
{
    
}

template<class Type>
BinarySearchTreeNode<Type> * BinarySearchTree<Type>::getRoot()
{
    return root;
}

template<class Type>
void BinarySearchTree<Type>::setRoot(BinarySearchTreeNode<Type> * root)
{
    this->root = root;
}

template<class Type>
int BinarySearchTree<Type>::calculateSize(BinarySearchTreeNode<Type> * start)
{
    
}

template<class Type>
bool BinarySearchTree<Type> :: contains(Type itemToFind)
{
    BinarySearchTreeNode<Type> * current = root;
    if(current == nullptr)
    {
        return false;
    }
    else
    {
        while(current != nullptr)
        {
            if(itemToFind == current->getNodeData())
            {
                return true;
            }
            else if  (itemToFind < current->getNodeData())
            {
                current - current->getLeftChild();
            }
            else
            {
                 current = current->getRightChild();
            }
        }
        return false;
    }
}

template<class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinarySearchTreeNode<Type> * insertMe = new BinarySearchTreeNode<Type>(itemToInsert);
    BinarySearchTreeNode<Type> * previous = nullptr;
    BinarySearchTreeNode<Type> * current = root;
    
    if(current == nullptr)
    {
        root = insertMe;
    }
    else
    {
        while(current != nullptr)
        {
            previous = current;
            if(itemToInsert < current->getNodeData())
            {
                current = current->getLEftChild();
            }
            else if(itemToInsert > current->getNodeData())
            {
                current = current->getRightChild();
            }
            else
            {
                cerr <<"Item exists already - Exiting" << endl;
                delete  insertMe;
                return;
            }
        }
        
        if (previous->getNodeData() > itemToInsert)
        {
            previous->setLeftChild(insertMe);
        }
        else
        {
            previous->setRightChild(insertMe);
        }
        insertMe->setRootPointer(previous);
    }
}

template <class Type>
void BinarySearchTree<Type> :: remove(Type getRidOfMe)
{
    if(root == nullptr)
    {
        cout << "Empty tree so removal is not possible" << endl;
    }
    else
    {
        BinarySearchTreeNode<Type> * current = root;
        BinarySearchTreeNode<Type> * previous = nullptr;
        bool hasBeenFound = false;
        
        while(current != nullptr && !hasBeenFound)
        {
            if(current->getNodeData() == getRidOfMe)
            {
                hasBeenFound = true;
            }
            else
            {
                previous = current;
                if(getRidOfMe < current->getNodeData())
                {
                    current = current->getLeftChild;
                }
                else
                {
                    current = current->getRightChid();
                }
            }
        }
        
        if(current == nullptr)
        {
            cerr << "Item not found, removal unsuccessful" << endl;
        }
        else if(hasBeenFound)
        {
            if(current == root)
            {
                removeNode(root);
            }
            else if(getRidOfMe < previous->getNodeData())
            {
                removeNode(previous->getLeftChild());

            }
            else
            {
                removeNode(previous->getRightChild());
            }
        }
    }
}

template <class Type>
void BinarySearchTree<Type> :: removeNode(BinarySearchTreeNode<Type> * & removeMe)
{
    BinarySearchTreeNode<Type> * current;
    BinarySearchTreeNode<Type> * previous;
    BinarySearchTreeNode<Type> * temp;
    
    previous = removeMe->getRootPointer();
    
    if(removeMe->getRightChild() == nullptr && removeMe->getLeftChild() == nullptr)
    {
        temp = removeMe;
        removeMe = nullptr;
        
        if(previous != nullptr && removeMe->getNodeData() < previous->getNodeData())
        {
            previous->setLeftChild(removeMe);
        }
        else if(previous != nullptr && removeMe->getNodeData() > previous->getNodeData())
        {
            previous->setRightChild(removeMe);
        }
        
        delete temp;
    }
    
    else if(removeMe->getRightChild() == nullptr)
    {
        temp = removeMe;
        removeMe = removeMe->getLeftChild();
        
        if(previous != nullptr && temp->getNodeData() < previous->getNodeData())
        {
            previous->setLeftChild(removeMe);
        }
        else if(previous != nullptr && temp->getNodeData() > previous->getNodeData())
        {
            previous->setRightChild(removeMe);
        }
        
        removeMe->setRootPointer(previous);
        
        delete temp;
    }
    
    //Has only left
    else if(removeMe->getRightChild() == nullptr)
    {
        temp = removeMe;
        
        if(previous != nullptr && temp->getNodeData() < previous->getNodeData())
        {
            previous->setLeftChild(removeMe);
        }
        else if(previous != nullptr && temp->getNodeData() > previous->getNodeData())
        {
            previous->setRightChild(removeMe);
        }
        
        removeMe->setRootPointer(previous);
        
        delete temp;
    }
    
    //Has only right
    else if(removeMe->getLeftChild() == nullptr)
    {
        temp = removeMe;
        removeMe = removeMe->getRightChild();
        if(previous != nullptr && removeMe->getNodeData() < previous->getNodeData())
        {
            previous->setLeftChild(removeMe);
        }
        else if(previous->setRightChild(removeMe))
        {
            previous->setRightChild(removeMe);
        }
                
        removeMe->setRootPointer(previous);
        delete temp;
    }
    
    else
    {
        current = removeMe->getLeftChild();
        previous = nullptr;
        
        while(current->getRightChild() != nullptr)
        {
            previous = current;
            current = current->getRigthChild();
        }
        
        removeMe->setNodeData(current->getNodeData());
        
        if(previous == nullptr)
        {
            removeMe->setLeftChild(current->getLeftChild());
            current->setLeftChild()->setRootPointer(removeMe);
        }
        else
        {
            previous->setRightChild(current->getLeftChild());
            if(current->getLeftChild() != nullptr)
            {
                current->getLeftChild()->setRootPointer(previous);
            }
        }
        
        delete current;
    }
}

#endif /* BinarySearchTree_h */
