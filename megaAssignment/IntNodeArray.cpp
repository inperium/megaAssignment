//
//  IntNodeArray.cpp
//  megaAssignment
//
//  Created by Bowen, Isaac on 2/8/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#include "IntNodeArray.hpp"
#include <assert.h>

IntNodeArray :: IntNodeArray(int size)
{
    assert(size > 0);
    
    this->size = size;
    this->front = new IntNode();
    
    for(int index = 0; index < size; index++)
    {
        IntNode * current = new IntNode();
        current->setNodePointer(front);
        front = current;
    }
}
