//
//  BiDirectionalNode.h
//  megaAssignment
//
//  Created by Bowen, Isaac on 2/27/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef BiDirectionalNode_h
#define BiDirectionalNode_h

template <class Type>
class BiDirectionalNode : public Node<Type> {
    
private:
    BiDirectionalNode<Type> * previous;
    BiDirectionalNode<Type> * next;
    
public:
    BiDirectionalNode();
    BiDirectionalNode(Type data);
    BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next);
    
    BiDirectionalNode<Type> * getNextPointer();
    BiDirectionalNode<Type> * getPreviousPointer();
    
    void setNextPoitner(BiDirectionalNode<Type> * next);
    void setPreviousPointer(BiDirectionalNode<Type> * previous);
};

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode() : Node<Type>(){
    this->nextPointer = nullptr;
    this->previous = nullptr;
}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode(Type data) : Node<Type>(data){
    this->next = nullptr;
    this->previous = nullptr;
}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next) : Node<Type> (data, next)
{
    this->nextPointer = next;
    this->previous = previous;
}

template <class Type>
BiDirectionalNode<Type> * BiDirectionalNode<Type> :: getNextPointer()
{
    return this->next;
}

template <class Type>
BiDirectionalNode<Type> * BiDirectionalNode<Type> :: getPreviousPointer()
{
    return this->previous;
}

template <class Type>
void BiDirectionalNode<Type> :: setPreviousPointer(BiDirectionalNode<Type> * previous)
{
    previous=this->previous;
}

template <class Type>
void BiDirectionalNode<Type> :: setNextPoitner(BiDirectionalNode<Type> * next)
{
    next=this->next;
}

#endif /* BiDirectionalNode_h */
