//
//  megaController.cpp
//  megaAssignment
//
//  Created by Bowen, Isaac on 2/6/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#include "megaController.hpp"
#include <iostream>
#include "IntNodeArray.hpp"
using namespace std;

megaController :: megaController()
{
    
}

void megaController :: start()
{
    cout << "Starting the project" << endl;
    cout << "Switching to the array testing" << endl;
    testIntArray();
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
}
