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
#include "../Model/CrimeData.hpp"
#include "../Model/BinarySearchTree.h"
#include "../Model/AVLTree.h"
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
    void writeFoodDataStatistics(DoubleList<FoodItem> source, string fileName);
    BinarySearchTree<CrimeData> readCrimeDataToBinarySearchTree(string filename);
    AVLTree<CrimeData> readCrimeDataToAVLTree(string filename);
};
#endif /* FileController_hpp */
