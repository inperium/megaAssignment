//
//  Array.h
//  megaAssignment
//
//  Created by Bowen, Isaac on 2/15/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include "Node.hpp"
#include <assert.h>

template <class Type>
class Array
{
private:
    int size;
    Node<Type> * front;
public:
    Array();
    Array(int size);
    
    int getSize();
    Type getFromIndex(int index);
    void setAtIndex(int index, Type value);
};


#endif /* Array_h */
