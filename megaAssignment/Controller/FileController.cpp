//
//  FileController.cpp
//  megaAssignment
//
//  Created by Bowen, Isaac on 3/27/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#include "FileController.hpp"


DoubleList<FoodItem> FileController :: readDataFromFileAsList(string filename)
{
    DoubleList<FoodItem> dataSource;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    if(dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            stringstream parseCSV(currentCSVLine);
            
            string title, tempCost, tempCalorie, tempTasty;
            double cost;
            int calories;
            bool isDelish;
            
            getline(parseCSV, title, ',');
            getline(parseCSV, tempCost, ',');
            getline(parseCSV, tempCalorie, ',');
            getline(parseCSV, tempTasty, ',');
            
            if (rowCount != 0)
            {
                
            }
            rowCount++;
            
            cout << currentCSVLine << endl;
        }
        dataFile.close();
    }
    else
    {
        
    }
    
    return dataSource;
}
