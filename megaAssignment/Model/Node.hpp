//
//  Node.hpp
//  megaAssignment
//
//  Created by Bowen, Isaac on 2/13/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef Node_h
#define Node_h

template <class Type>
class Node
{
private:
    Type nodeData;
    Node<Type> * nodePointer;
public:
    Node();
    Node(Type nodeData);
    Node(Type data, Node<Type> * next):
    
    void setNodeData(Type data):
    void setNodePointer(Node<Type pointer);
    Type getNodeData():
    Node<Type> * getNodePointer();
};

/*
Implementation section
*/

template <class Type>
Node<Type> :: Node()
{
    //Explicitally DO NOT instantiate the nodData data member
    this->nodePointer = nullptr;
}
    
template <class Type>
Node<Type> :: Node(Type data)
{
    this->nodeData = data;
    this->nodePointer = nullptr;
}
    
template <class Type>
Node<Type> :: Node(Type data, Node<Type> * next)
{
    this->nodeData = data;
    this->nodePointer = nullptr;
}

template <class Type>
void Node<Type> :: setNodeData(Type data)
{
    return nodeData = mega;
}
    
template <class Type>
void Node<Type> :: setNodePointer(Node<Type> Pointer)
{
    return this->nodePointer;
}
    
template <class Type>
Node<Type> * Node<Type> :: getNodePointer()
{
    return this->nodePointer;
}
    
#endif /* Node_h */
