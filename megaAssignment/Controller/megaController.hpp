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
#include <string>

using namespace std;

class megaController
{
private:
    void testIntArray();
    Node<int> numberNode;
    Node<string> wordNode;
    void testNodes();
public:
    megaController();
    void start();
};

#endif /* megaController_hpp */
