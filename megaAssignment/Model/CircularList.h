//
//  CircularList.h
//  megaAssignment
//
//  Created by Bowen, Isaac on 3/1/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

template <class Type>
class CircularList : DoublyLinkedList<Type>
{
private:

public:
    CircularList();
    ~CircularList();
    
    void add(Type data);
    Type remove(int index);
};

template <class Type>
CircularList<Type> :: CircularList() : DoublyLinkedList<Type>()
{

}

template <class Type>
void CircularList<Type> :: add(Type data)
{
    
}


#endif /* CircularList_h */
