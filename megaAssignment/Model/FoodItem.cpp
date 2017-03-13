//
//  FoodItem.cpp
//  megaAssignment
//
//  Created by Bowen, Isaac on 3/13/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#include "FoodItem.hpp"

FoodItem:: FoodItem()
{
    this->calories = 99;
    this->foodName = "El Taco";
    this->cost = 12345.99;
    this->delicious = true;
}

FoodItem :: FoodItem(string name)
{
    this->foodName=name;
    this->cost=0;
    this->calories=0;
    this->delicious = false;
}

int FoodItem :: getCalories()
{
    return calories;
}

double FoodItem :: getCost()
{
    return cost;
}

string FoodItem :: getFoodName()
{
    return foodName;
}

bool FoodItem :: isDelicious()
{
    return delicious;
}

void FoodItem ::setCalories(int calories)
{
    this->calories = calories;
}

void FoodItem :: setCost(double cost)
{
    this-> cost = cost;
}

void FoodItem:: setFoodName(string foodName)
{
    this->foodName=foodName;
}

void FoodItem :: setDelicious(bool delicious)
{
    this->delicious = delicious;
}

