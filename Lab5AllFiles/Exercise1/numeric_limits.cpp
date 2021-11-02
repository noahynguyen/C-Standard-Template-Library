/* A C++ program to print out the max and min value of the following primitive types: int, unsigned int, long, double and float. 
*  Created by Noah Nguyen
*  11/03/2021
*/
#include <limits>
#include <iostream>
using namespace std;
 
int main(int argc, char** argv) 
{
    //Max and min value of int
    cout << "Max value of int: " << numeric_limits<int>::max() << endl;
    cout << "Min value of int: " << numeric_limits<int>::min() << endl;

    //max and min value of unsigned int
    cout << endl << "Max value of unsigned int: " << numeric_limits<unsigned int>::max() << endl;
    cout << "Min value of unsigned int: " << numeric_limits<unsigned int>::min() << endl;

    //max and min value of long
    cout << endl << "Max value of long: " << numeric_limits<long>::max() << endl;
    cout << "Min value of long: " << numeric_limits<long>::min() << endl;

    //max and min value of double
    cout << endl << "Max value of double: " << numeric_limits<double>::max() << endl;
    cout << "Min value of double: " << numeric_limits<double>::min() << endl;

    //max and min value of float
    cout << endl << "Max value of float: " << numeric_limits<float>::max() << endl;
    cout << "Min value of float: " << numeric_limits<float>::min() << endl;
    
    //returns the smallest positive subnormal value of the given floating-point type
    cout << endl << "The smallest nonzero denormalized value for float objects is: " << numeric_limits<float>::denorm_min() << endl;

    //returns the number of radix digits that the type can represent without loss of precision.
    cout << endl << "Radix digits of integer are: " << numeric_limits<int>::digits << endl;

    //returns the lowest finite value of the given type
    cout << endl << "The lowest finite value of double is " << numeric_limits<double>::lowest() << endl;
}