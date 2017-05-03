//
//  MegaController.cpp
//  megaAssignment
//
//  Created by Bowen, Isaac on 2/6/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#include "MegaController.hpp"
#include <iostream>
#include "../Model/IntNodeArray.hpp"
#include "../Model/List.h"
#include "FileController.hpp"

#include "../Model/Node.hpp"
#include "../Model/Array.h"
#include "../Model/CircularList.h"
#include "../Model/Queue.h"
#include "../Model/Stack.h"
#include "../Model/DoubleList.h"
#include "../Model/DoublyLinkedList.h"
#include "../Model/BiDirectionalNode.h"
#include "../Model/Timer.hpp"
#include "../Model/FoodItem.hpp"
#include "../Model/CircularList.h"
#include "../Controller/FileController.hpp"
#include "../Model/BinarySearchTreeNode.h"
#include "../Model/Tree.h"
#include "../Model/BinarySearchTree.h"

using namespace std;

MegaController :: MegaController()
{
    wordNode = Node<string>("");
    numberNode = Node<int>();
    
}

void MegaController :: testNodes()
{
    cout << "The contents of the Node<string>test" << endl;
    cout << wordNode.getNodeData() << endl;
    cout << "Here is the Node<int>" << endl;
    cout << numberNode.getNodeData() << endl;
}

void MegaController :: start()
{
    testAVLTreeOperations();
}

void MegaController :: testIntArray()
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

void MegaController :: testAdvancedFeatures()
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

void MegaController :: testList()
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

void MegaController :: testListTiming()
{
    DoubleList<int> timingList;
    Timer totalTimer;
    totalTimer.startTimer();
    for(int index = 0; index < 100000; index++)
    {
        timingList.add(rand());
    }
    
    long slowTime [1000];
    long fastTime[1000];
    double averageSlow = 000, averageFast = 0.00;
    Timer doubleTimer;
    
    for(int index = 0; index < 1000; index++)
    {
        int randomIndex = rand() % 10000;
        doubleTimer.startTimer();
        timingList.getFromIndex(randomIndex);
        doubleTimer.stopTimer();
        slowTime[index] = doubleTimer.getExecutionTimeInMicroseconds();
        doubleTimer.resetTimer();
        
        doubleTimer.startTimer();
        timingList.getFromIndexFast(randomIndex);
        doubleTimer.stopTimer();
        fastTime[index] = doubleTimer.getExecutionTimeInMicroseconds();
        doubleTimer.resetTimer();
        
        averageSlow += slowTime[index];
        averageFast += fastTime[index];
    }
    
    averageSlow = averageSlow/1000.00;
    averageFast = averageFast/1000.00;
    totalTimer.stopTimer();
    
    cout << "The average speed for the getFromIndex was " << averageSlow << " microseconds." << endl;
    cout << "The aerage speed forthe etFromIndexFasst method was: " << averageFast << " microseconds." << endl;
}

void MegaController  :: testIntStack()
{
    Stack<int> numberStack;
    numberStack.add(123);
    numberStack.add(456);
    numberStack.add(789);
    cout << "The size of the list before removing is: " << numberStack.getSize() << endl;
    numberStack.pop();
    cout << "The size of the list after removing is: " << numberStack.getSize() << endl;
    numberStack.add(2315);
    numberStack.peek();
    numberStack.push(345);
    cout << "The test value is " << numberStack.remove(3) << " and should be 345" << endl;
    cout << "The size of the list after the end is: " << numberStack.getSize() << endl;
}

void MegaController  :: testFoodQueue()
{
    Queue<FoodItem> breakfast;
    
    FoodItem taco("El Macho Taco");
    breakfast.enqueue(taco);
    
    FoodItem remove = breakfast.dequeue();
    cout <<"The item removed from the queue was: " << remove.getFoodName() << ". It should be be El Macho Taco." << endl;
    
    cout << "The size of the breafast is" << breakfast.getSize() << endl;
    
    FoodItem bacon;
    breakfast.add(bacon);
    cout << "The number of breakfast items is: " <<breakfast.getSize() << endl;
    
    cout << "The size of the breafast is" << breakfast.getSize() << endl;
    
    FoodItem food = breakfast.peek();
    cout << "The eaten item is " << food.getFoodName() << ". It should be be El Macho Taco"<< endl;
}

void MegaController :: testBinarySearchTreeOperations()

{
    
    BinarySearchTree<int> numbers;
    
    numbers.insert(9843);
    
    numbers.insert(10);
    
    numbers.insert(43);
    
    numbers.insert(-123);
    
    numbers.insert(23465);
    
    numbers.insert(10); // won't go in
    
    numbers.insert(43243);
    
    numbers.insert(-45677654);
    
    numbers.insert(92165);
    
    
    
    cout << "Size should be 8 and is: " << numbers.getSize() << endl;
    
    cout << "In order traversal should be: \n\t-45677654 \n\t-123 \n\t10 \n\t43 \n\t9843 \n\t23465 \n\t43243 \n\t92165" << endl;
    
    numbers.inOrderTraversal();
    
    
    
    cout << "Height should be 4 and is: " << numbers.getHeight() << endl;
    
    cout << "Balanced should be false || 0 and is: " << numbers.isBalanced() << endl;
    
    
}

void MegaController :: testBinarySearchData()

{
    
    FileController fileData;
    
    Timer treeTimer;
    
    treeTimer.startTimer();
    
    BinarySearchTree<CrimeData> crimeTree = fileData.readCrimeDataToBinarySearchTree("/Users/asmi0816/Documents/crime.csv");
    
    treeTimer.stopTimer();
    
    
    
    int count = crimeTree.getSize();
    
    int height = crimeTree.getHeight();
    
    bool complete = crimeTree.isComplete();
    
    bool balanced = crimeTree.isBalanced();
    
    
    
    cout << "The count of the tree is: " << count << ", the height is " << height << ".\n The tree's balanced status is " << balanced << ", and its complete status is " << complete << endl;
    
    cout << "The time to read in the tree was: " << endl;
    
    treeTimer.displayTimerInformation();
}

void MegaController :: testAVLTreeOperations()

{
    
    AVLTree<int> numbers;
    
    numbers.insert(9843);
    
    numbers.insert(10);
    
    numbers.insert(43);
    
    numbers.insert(-123);
    
    numbers.insert(23465);
    
    numbers.insert(10); // won't go in
    
    numbers.insert(43243);
    
    numbers.insert(-45677654);
    
    numbers.insert(92165);
    
    
    
    cout << "Size should be 8 and is: " << numbers.getSize() << endl;
    
    cout << "In order traversal should be: \n\t-45677654 \n\t-123 \n\t10 \n\t43 \n\t9843 \n\t23465 \n\t43243 \n\t92165" << endl;
    
    numbers.inOrderTraversal();
    
    
    
    cout << "Height should be 4 and is: " << numbers.getHeight() << endl;
    
    cout << "Balanced should be true || 1 and is: " << numbers.isBalanced() << endl;
    
}

void MegaController :: testAVLData()

{
    
    FileController fileData;
    
    Timer treeTimer;
    
    treeTimer.startTimer();
    
    AVLTree<CrimeData> crimeTree = fileData.readCrimeDataToAVLTree("/Users/cody.henrichsen/Documents/crimes.csv");
    
    treeTimer.stopTimer();
    
    
    
    int count = crimeTree.getSize();
    
    int height = crimeTree.getHeight();
    
    bool complete = crimeTree.isComplete();
    
    bool balanced = crimeTree.isBalanced();
    
    
    
    cout << "The count of the tree is: " << count << ", the height is " << height << ".\n The tree's balanced status is " << balanced << ", and its complete status is " << complete << endl;
    
    cout << "The time to read in the tree was: " << endl;
    
    treeTimer.displayTimerInformation();
    
}
