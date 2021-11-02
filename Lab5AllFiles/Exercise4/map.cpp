/* C++ program to get you familiar with the map class in Standard Template Library
*  Created by Noah Nguyen
*  03/11/2021
*/

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    //Create an empty map, whose “key” is string type and “value” is integer type
    //Add five different key-value pairs into the map
    map<string, int> m1 = {{"tomatoes", 5}, {"potatoes", 2}, {"carrots", 3}, {"cherries", 6}, {"beans", 7}};
    //print out key-value in map
    cout << "MAP CREATED: " << endl;
    for (auto const& pair : m1)
    {
        cout << pair.first << ", " << pair.second << endl;
    }
    //Insert a pair whose key exists in the map, print out the return value of the insert operation
    pair<map<string,int>::iterator,bool> insert_existed = m1.insert({"tomatoes", 5});
    if (insert_existed.second)
    {
        cout << endl << "INSERT SUCCESSFULLY" << endl;
    }
    else
    {
        cout << endl << "INSERT FAILED" << endl;
    }
    //Insert a pair whose key does not exist in the map, print out the return value of the insert operation
    pair<map<string,int>::iterator,bool> insert_new = m1.insert({"rice", 10});
    if (insert_new.second)
    {
        cout << endl << "INSERT SUCCESSFULLY" << endl;
    }
    else
    {
        cout << endl << "INSERT FAILED" << endl;
    }
    cout << endl << "MAP AFTER INSERTING NEW PAIR: " << endl;
    for (auto const& pair : m1)
    {
        cout << pair.first << ", " << pair.second << endl;
    }      
    //update an existing value
    m1["tomatoes"] = 10;
    //insert a new value
    m1["brussel sprouts"] = 50;
    cout << endl << "MAP AFTER MODIFICATIONS: " << endl;
    for (auto const& pair : m1)
    {
        cout << pair.first << ", " << pair.second << endl;
    }  

}