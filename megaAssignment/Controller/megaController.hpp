//
//  MegaController.hpp
//  megaAssignment
//
//  Created by Bowen, Isaac on 2/6/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef MegaController_hpp
#define MegaController_hpp

#include "../Model/Node.hpp"
#include "../Model/Array.h"
#include "../Model/FoodItem.hpp"
#include "../Model/DoubleList.h"
#include "../Model/Stack.h"
#include "../Model/Queue.h"
#include "../Model/CircularList.h"
#include "../Model/DoubleList.h"
#include "../Model/Timer.hpp"
#include <string>

using namespace std;

class MegaController
{
private:
    void testIntArray();
    Node<int> numberNode;
    Node<string> wordNode;
    void testNodes();
    void testAdvancedFeatures();
    void testListIntro();
    void testListTiming();
    void testIntStack();
    void testFoodQueue();
    void testCircularList();
    void testBinarySearchTreeOperations();
    void testBinarySearchData();
    void testAVLTreeOperations();
    void testAVLData();
    void testList();
    void testGraph();
    
public:
    MegaController();
    void start();
    
};

#endif /* MegaController_hpp */
