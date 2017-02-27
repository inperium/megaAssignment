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
#include "../Model/List.h"

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
    testList();
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

void megaController :: testAdvancedFeatures()
{
    int showDestructor = 0;
    
    if(showDestructor < 1)
    {
        Array<string> words = Array<string>(5);
        cout << "There should be messages about the destructor next" << endl;
    }
    Array<string> words = Array<string>(4);
    words.setAtIndex(0, "at zero");
    words.setAtIndex(3, "in the Last spot");
    Array<string> copiedWords = Array<string>(4);
    
    cout << "These should match: " << endl;
    cout << words.getFromIndex(0) << " should be the same as " << copiedWords.getFromIndex(0) << endl;
    
    copiedWords.setAtIndex(3, "Changed the contents of hte copied Array");
}

void megaController :: testList()
{
    List<string> theList;
    theList.addFront("method ");
    theList.addEnd("works");
    theList.addFront("The add");
    theList.addEnd("as it should.");
    
    for(int index = 0; index < theList.getSize(); index++)
    {
        cout << theList.getFromIndex(index) << endl;
    }
    
    for(int index = 0; index < theList.getSize(); index++)
    {
        cout << theList.remove(index) << endl;
    }
    
    theList.addFront("The list is as new");
    theList.addFront("Now it contains these words");
    
    for(int index = 0; index < theList.getSize(); index++)
    {
        cout << theList.getFromIndex(index) << endl;
    }
    
    if (theList.contains("words"))
    {
        cout << "The contains function works" << endl;
    }
}
