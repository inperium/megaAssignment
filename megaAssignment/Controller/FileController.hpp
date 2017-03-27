//
//  FileController.hpp
//  megaAssignment
//
//  Created by Bowen, Isaac on 3/27/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Model/DoubleList.h"
#include "../Model/FoodItem.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

class FileController
{
private:
    DoubleList<FoodItem> foodItemList;
public:
    DoubleList<FoodItem> readDataFromFile(string filename);
};

#endif /* FileController_hpp */
