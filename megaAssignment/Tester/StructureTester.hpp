//
//  StructureTester.hpp
//  megaAssignment
//
//  Created by Bowen, Isaac on 3/27/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef StructureTester_hpp
#define StructureTester_hpp

#include "../Model/Node.hpp"
#include "../Model/Array.h"
#include "../Model/Timer.hpp"
#include "../Model/IntNodeArray.hpp"
#include "../Model/List.h"
#include "../Model/DoubleList.h"
#include "../Model/Stack.h"
#include "../Model/Queue.h"
#include "../Model/CircularList.h"
#include "../Model/FoodItem.hpp"

#include <string>

class StructureTester
{
    public:
    void testIntArray();
    void testNodeTypes();
    void testArrayTemplate();
    void testDestructor();
    void testAdvancedFeatures();
    void testListIntro();
    void testDoubleLists();
    void testListTiming();
    void testMemeQueue();
    void testNumberStack();
    void testCircularList();
};

#endif /* StructureTester_hpp */
