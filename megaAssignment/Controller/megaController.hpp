//
//  megaController.hpp
//  megaAssignment
//
//  Created by Bowen, Isaac on 2/6/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef megaController_hpp
#define megaController_hpp

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

class megaController
{
private:
    void testIntArray();
    Node<int> numberNode;
    Node<string> wordNode;
    void testNodes();
    void testAdvancedFeatures();
    void testList();
    void testListTiming();
    void testIntStack();
    void testFoodQueue();
public:
    megaController();
    void start();
};

#endif /* megaController_hpp */
