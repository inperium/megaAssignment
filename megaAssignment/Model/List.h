//
//  List.h
//  megaAssignment
//
//  Created by Bowen, Isaac on 2/21/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef List_h
#define List_h
#include <assert.h>

template <class Type>
class List
{
private:
    int size;
    Node<Type> * front;
public:
    
    Node<Type> * getFront() const;
};

#endif /* List_h */
