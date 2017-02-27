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
class BiDirectionalNode : public Node<Type>
{
private:
    BiDirectionalNode<Type> * previous;
    BiDirectionalNode<Type> * next;
    Type Data;
public:
    BiDirectioanlNode();
    BiDirectionalNode(Type Data);
    BiDirectionalNode(Type data, BiDirectionalNode<Type * previous, BiDirectionalNode<Type> * next);
}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode() : Node()
{
    
}

template <class Type>
BiDirectionalNode<Type> :: BidirectionalNode(Type dta) : Node<Type>(data)
{
    
}

#endif /* BiDirectionalNode_h */
