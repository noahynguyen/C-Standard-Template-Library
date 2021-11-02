/*A C++ program to get you familiar with the vector class in Standard Template Library
* Created by Noah Nguyen
* 11/2/2021
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //create a vector of int of size 5 and initialize each element in the vector with a random even number
    vector<int> vec;
    cout << "Vector of ints created: ";
    for (int i = 0; i < 5; i++)
    {
        int element = (2 * rand() % 100);
        vec.push_back(element);
        cout << element << " ";
    }
    //add 5 random odd number at the end of the vector
    for (int i = 0; i < 5; i++)
    {
        int element = 1 + (2 * rand() % 100);
        vec.push_back(element);
        cout << element << " ";
    }

    //sort the vector in ascending order
    //insertion sort
    for (int place = 0; place < vec.size(); place++)
    {
        for (int i = place + 1; i < vec.size(); i++)
        {
            if (vec[place] > vec[i])
            {
                int temp = vec[place];
                vec[place] = vec[i];
                vec[i] = temp;
            }
        }
    }
    cout << endl << "After sorting, the vector is: ";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    //Create an integer vector with the same size as the vector obtained in step 5, but the value of each element is doubled.
    vector<int> vec2;
    cout << "New vector of ints created: ";
    for (int i = 0; i < vec.size(); i++)
    {
        vec2.push_back(vec[i] * 2);
        cout << vec2[i] << " ";
    }
    cout << endl;
    //Create vector of vector of ints
    vector<vector<int>> vec3;
    //Add vector vec and vec2 to vector vec3
    vec3.push_back(vec);
    vec3.push_back(vec2);
    cout << "Vector of vector of ints is: " << endl;
    for (int i = 0; i < vec3.size(); i++)
    {
        for (int j = 0; j < vec2.size(); j++)
        {
            cout << vec3[i][j] << " ";
        }
        cout << endl;
    }

}
