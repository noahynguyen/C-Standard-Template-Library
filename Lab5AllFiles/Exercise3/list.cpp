/* A C++ program to get you familiar with the list class in Standard Template Library
*  Created by Noah Nguyen
*  11/2/2021
*/
#include <iostream>
#include <list>
using namespace std;

int main()
{
    //create an empty list
    list<int> intlist;
    //Add 1, 3, 5, 7, 9 to the end of the list in sequence
    for (int i = 1; i < 10; i+= 2)
    {
        intlist.push_back(i);
    }
    //Add 2, 4, 6, 8, 10 to the beginning of the list in sequence
    for (int i = 2; i < 11; i+= 2)
    {
        intlist.push_front(i);
    }
    cout << "intlist: ";
    for (int i : intlist)
    {
        cout << i << " ";
    }
    
    //print out the first element in the list
    cout << endl << "The first element in the list is " << intlist.front() << endl;
    //print out the last element in the list
    cout << "The last element in the list is " << intlist.back() << endl;
    //remove 3 from the list
    intlist.remove(3);
    cout << "After removing 3, the list is ";
    for (int i : intlist)
    {
        cout << i << " ";
    } 
    //sorting the list
    intlist.sort();
    cout << endl << "After sorting, the list is ";
    for (int i : intlist)
    {
        cout << i << " ";
    }
    //removing the odd elements from the list
    intlist.remove_if([](int n){ return n % 2 == 1;});
    //print out elements in the list
    cout << endl << "After removing the odd elements, the list is ";
    for (int i : intlist)
    {
        cout << i << " ";
    }
    cout << endl;
    
}