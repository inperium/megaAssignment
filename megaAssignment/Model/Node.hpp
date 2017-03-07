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
    Node<Type> * nextPointer;
public:
    Node();
    Node(Type nodeData);
    Node(Type data, Node<Type> * next);
    
    void setNodeData(Type data);
    void setNextPointer(Node<Type>* pointer);
    Type getNodeData();
    Node<Type> * getNextPointer();
};

    /*
     Implementation section
     */
    
    template <class Type>
    Node<Type> :: Node(){
        // Explicitly DO NOT instantiate the nodeData data member
        this->nextPointer = nullptr;
    }
    
    
    template <class Type>
    Node<Type> :: Node(Type nodeData){
        this->nodeData = nodeData;
        this->nextPointer = nullptr;
    }
    
    template <class Type>
    Node<Type> :: Node(Type data, Node<Type> * next){
        this->nodeData = data;
        this->nextPointer = next;
    }
    
    template <class Type>
    void Node<Type> :: setNodeData(Type data){
        this->nodeData = data;
    }
    
    template <class Type>
    void Node<Type> :: setNextPointer(Node<Type>* pointer){
        this->nextPointer = pointer;
    }
    
    template <class Type>
    Type Node<Type> :: getNodeData(){
        return this->nodeData;
    }
    
    template <class Type>
    Node<Type>* Node<Type> :: getNextPointer(){
        return this->nextPointer;
    }
    
#endif /* Node_h */
