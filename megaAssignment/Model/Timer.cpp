//
//  Timer.cpp
//  CPlusPlusPlusPlusMinus
//
//  Created by Bowen, Isaac on 1/31/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#include <iostream>
#include "Timer.hpp"

using namespace std;

Timer :: Timer()
{
    executionTime = 0;
}
void Timer :: resetTimer()
{
    executionTime = 0;
}

void Timer :: startTimer()
{
    executionTime = clock();
}

void Timer :: stopTimer()
{
    executionTime = clock() - executionTime;
}

long Timer :: getExecutionTimeInMicroseconds(){
    return executionTime;
}

void Timer :: displayTimerInformation()
{
    cout << "This took this long to execute " << executionTime << endl;
    cout << "That is this many seconds" << executionTime/CLOCKS_PER_SEC << endl;
    
}
