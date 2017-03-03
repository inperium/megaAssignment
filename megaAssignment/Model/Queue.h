//
//  Queue.h
//  megaAssignment
//
//  Created by Bowen, Isaac on 3/3/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

template <class Type>
class Queue : public DoublyLinkedList<Type>
{
private:
public:
    Queue();
    ~Queue();
    
    void add(Type data);
    Type remove(int index);
    
    void enqueue(Type data);
    Type dequeue();
    Type peek();
};

template <class Type>
void Queue<Type> :: add(Type value)
{
    add(value);
}

/*
    Add to Queue:
    Create Node
    If First - adjust front
    else add to end
    move end
 adjust size
 */
template <class Type>
void Queue<Type> :: enqueue(Type instertedValue)
{
    BiDirectionalNode<Type> * added = BiDirectionalNode<Type>(insertedValue);
    
    if(this->getSize() == 0 || this->getFront == nullptr || this->getEnd() == nullptr)
    {
        this->Front(added);
    }
    else
    {
        this->getEnd()->setnextPointer(added);
    }
    this->setEnd(added);
    this->setSize(this->getSize() + 1);
}

#endif /* Queue_h */
