//
//  megaController.cpp
//  megaAssignment
//
//  Created by Bowen, Isaac on 2/6/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#include "megaController.hpp"
#include <iostream>
#include "../Model/IntNodeArray.hpp"

using namespace std;

megaController :: megaController()
{
    wordNode = Node<string>("");
    numberNode = Node<int>();
    
}

void megaController :: testNodes()
{
    cout << "The contents of the Node<string>test" << endl;
    cout << wordNode.getNodeData() << endl;
    cout << "Here is the Node<int>" << endl;
    cout << numberNode.getNodeData() << endl;
}

void megaController :: start()
{
    cout << "Starting the project" << endl;
    cout << "Switching to the array testing" << endl;
    testNodes();
    cout << "Finished testing" << endl;
    cout << "Finished testing" << endl;
}
    
void megaController :: testIntArray()
{
    cout << "Testing the array" << endl;
    
    IntNodeArray temp = IntNodeArray(3);
    
    for (int index = 0; index < 3; index++)
    {
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
    
    cout << "Testing input" << endl;
    
    for(int index = 0; index < 3; index++)
    {
        temp.setAtIndex(index, index);

    }
    
    for(int index = 0; index < 3; index++)
    {
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
    
}
