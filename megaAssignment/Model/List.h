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
    List<Type>();
    List<Type>(const List<Type>&source);
    ~List<Type>();
    
    void addAtIndex(int index, Type value);
    void add(Type value);
    Type remove(int index);
    Type setAtIndex(int index, Type data);
    Type getFromIndex(int index, Type data);
    Bool contains(Type data);
    Int getSize(const);
    Node<Type> * getFront() const;
    
};

template <class Type>
List<Type> :: List()
{
}

#endif /* List_h */
