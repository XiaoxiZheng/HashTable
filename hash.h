#include <cstdlib>
#include<iostream>
#include<string>
using namespace std;

#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED

class Hash{

public:
    Hash(int);
    ~Hash();
    int HashFunction(string);//take and Evaluate the key and return an index number of int
    void insert(string);//insert the user input into the hash table
    bool search(string);//search for if the user input string is in the hash table
    void grow(string*);//a helper method that grows the size of table if capacity is reached.
private:
    int size;
    int count;
    string *table;
};


#endif // HASH_H_INCLUDED
