#include <cstdlib>
#include<iostream>
#include<string>
#include "hash.h"

using namespace std;

Hash::Hash(int size){//initializes with the size of HashTable
    this->size = size;
    count = 0;
    table = new string[size];
}
Hash::~Hash(){
    delete [] table;
}
//take and Evaluate the key and return an index number of int
int Hash::HashFunction(string key){ //basically used the provided code
    void insert(string);
    int index = 0;
    for (int i=0; i<key.length(); i++){
        index += key[i];
    }
    return index;
}
//helper method and let my HashTable grow if it reaches capacity of initial size
void Hash::grow(int initiSize,string temp[]){
    table = new string[initiSize];
    for(int i = 0; i<size; i++){//if i is less than the previous size, copy everything over.
        table[i]= temp[i];
    }
    size*=2;
}
//takes in the key and evaluate an index from hashFunction and insert the key in the proper allocation
void Hash::insert(string key){
        int hashKey = HashFunction(key);
        //Used probing if HashFunction returned an exact key that already has something in it
        while(!table[hashKey%size].empty()){ //so as long as the space with indicated key already has something in it
        hashKey++;//increment hashKey, and pass through the while loop, until this is not the case
        }
        table[hashKey%size] = key;//if the space is available, then set key in that space
        count++; //increment my counter
        if(count == size){//if counter reaches the size of table, then grow twice as big
            grow(2*size,table);
        }
}

bool Hash::search(string key){
    int hashKey = HashFunction(key);
    for(int i = 0; i< size; i++){
        //
        if((table[(hashKey+i)% size].compare(key) == false)){
            return true;
            break;
        }
    }
    return false;
}

