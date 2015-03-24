
#include <cstdlib>
#include <iostream>
#include <string>
#include "hash.h"
#include "hash.cpp"
using namespace std;

int main(int argc, char** argv)
{
    //cout<<"Please enter the number of entry in the hashTable"<<endl;
    int n;
    cin >> n;
    Hash *hashObj = new Hash(n);
    //cout<<"1---Insert Key in the hashTable"<<endl;
    //cout<<"2---Search Key in the hashTable"<<endl;
    string key;
    int choice =1;
    while(choice!=0){
        cin >> choice;
        switch(choice) {
            case 1:
                //cout<<"please enter the key"<<endl;
                cin >> key;
                hashObj->insert(key);
                //cout<<"insert"<<endl;
                break;
            case 2:
                //cout<<"please enter the key"<<endl;
                cin >> key;
                if(hashObj->search(key)){
                    cout<<"Yes"<<endl;
                    break;
                }
                cout<<"No"<<endl;
                break;
    }
}

    hashObj->~Hash();
return 0;

}
