//
//  intNode.hpp
//  megaAssignment
//
//  Created by Bowen, Isaac on 2/6/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef intNode_hpp
#define intNode_hpp

class intNode
{
private:
    int nodeData;
    intNode * nodePointer;
public:
    //Constructor
    intNode();
    intNode(int value);
    //Creates an IntNode with a specified value and next
    intNode(int value, intNode * nextNode);
    
    //methods
    int getNodeData();
    intNode * getNodePointer();
    
    void setNodeData(int value);
    void setNodepointer(intNode * next);
};

#endif /* intNode_hpp */
