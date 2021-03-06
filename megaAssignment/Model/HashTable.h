//
//  HashTable.h
//  megaAssignment
//
//  Created by Bowen, Isaac on 5/3/17.
//  Copyright © 2017 Bowen, Isaac. All rights reserved.
//

#ifndef HashTable_h
#define HashTable_h

#include <cmath>
#include <assert.h>
#include "HashNode.hpp"

using namespace std;
template <class Type>
class HashTable

{
private:
    long capacity;
    long size;
    double efficiencyPercentage;
    HashNode<Type> ** hashTableStorage;
    bool isPrime(long sampleNumber);
    void resize();
    long nextPrime();
    long findPosition(HashNode<Type> * data);
    long handleCollision(HashNode<Type> * data, long currentPosition);
    
public:
    HashTable();
    ~HashTable();
    void add(Type data);
    bool remove(Type data);
    void displayContents();
};

template <class Type>
HashTable<Type> :: HashTable()
{
    this->capacity= 101;
    this->efficiencyPercentage = 0.667;
    this->size = 0;
    this->hashTableStorage = HashNode<Type> * [capacity];
}

template <class Type>
HashTable<Type> :: ~HashTable()
{
    delete [ ] hashTableStorage;
}

template <class Type>
int HashTable<Type> :: nextPrime()
{
    int nextPrime = (this->capacity * 2) +1;
    
    while(!isPrime(nextPrime))
    {
        nextPrime += 2;
    }
    return nextPrime;
}

template <class Type>
bool HashTable<Type> :: isPrime(long canidateNumber)
{
    if(canidateNumber <= 1)
    {
        return false;
    }
    else if(canidateNumber == 2|| canidateNumber == 3)
    {
        return true;
    }
    else if(canidateNumber % 2 == 0)
    {
        return false;
    }
    else
    {
        for(int next = 3; next <= sqrt(canidateNumber) +1; next +=2)
        {
            if(canidateNumber % next = 0)
            {
                return false;
            }
        }
        return true;
    }
}

template <class Type>
long HashTable<Type> :: findPosition(HashNode<Type> * data)
{
    long insertPosition = data->getKey() % this->capacity;
    return insertposition;
}

template <class Type>
long HashTable<Type> :: handleCollision(HashNode<Type> * data, long currentPosition)
{
    long shift = 17;
    
    for(long position = currentPosition + shift; position != currentPosition; position += shift)
    {
        if(position >= capacity)
        {
            position = position % capacity;
        }
        
        if(hashTableStorage[position] == nullptr)
        {
            return position;
        }
    }
    return -1;
}

template <class Type>
void HashTable :: displayContents()

{
    for(long index = 0; index < capacity; index ++)
    {
        if(hashTableStorage[index] != nullptr)
        {
            cout << index << ": " << hashTable[index]->getData() << endl;
        }
    }
}

template <class Type>
long HashTable<Type> :: handleCollision(HashNode<Type> * data, long currentPosition){
    
}

template <class Type>
long HashTable<Type> :: remove(TypeData){
    bool removed = false;
    
    HashNode<Type> * find(data);
    long hashIndex - findPosition(find);
    
    if(hashTableStorage[hashIndex] != nllptr){
        hashTable
    }
}


template <class Type>
void Hashtable<Type> :: resize()
{
    long uupdatedCapacity = nextPrie();
    HashNode<Type> ** tempStorage = new HashNode<Type> * [updatedCapacity];
    
    std :: fill_N(tempStorage, updatedCapacity, nullptr);
    
    long oldCapacity= this->capacity;
    this->capacity = updatedCapacity;
    
    for(long index = 0; index < oldCapacity; index++)
    {
        if(hashTableStorage[index] != nullptr){
            HashNode<Type> * temp = hashTableStorage
        }
            
        long position = findPosition(temp);
        if(tempStorage[position] == nullptr)
        {
            tempStorage[position] = temp;
        }
        else
        {
            long updatedPosiion = handleCollision
        }
        
    }
        
}

template<class Type>
void HashTableType> :: add(Type data)
{
    this->size++;
    if(((this->size * 1.00) / this->capacity) > this->efficiencyPercentage)
    {
        resize();
    }
    
    hashNode<Type> * temp = newHashNode<Type>(data);
    long index = findPosition(temp);
    
    if(hashTableStorage[index] == nullptr)
    {
        hashTableStorage[index] = temp;
    }
    else
    {
        long updatedPosition = handleCollision(temp, index);
        hashTableStroage[updatedPosition] = temp;
    }
}



#endif /* HashTable_h */
