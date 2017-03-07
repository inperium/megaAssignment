//
//  intNode.hpp
//  megaAssignment
//
//  Created by Bowen, Isaac on 2/6/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef IntNode_hpp
#define IntNode_hpp

#include <stdio.h>

class IntNode
{
private:
    int nodeData;
    IntNode * nextPointer;
public:
    //Constructor
    IntNode();
    IntNode(int value);
    //Creates an IntNode with a specified value and next
    IntNode(int value, IntNode * nextNode);
    
    //methods
    int getNodeData();
    IntNode * getNextPointer();
    
    void setNodeData(int value);
    void setNextPointer(IntNode * next);
};

#endif /* intNode_hpp */
