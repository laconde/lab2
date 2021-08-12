// This program will determine the area and perimeter of a rectangle.

// Alberto Conde
// September 4, 2020

#include <iostream>
using namespace std;

const double LENGTH = 8;
const double WIDTH = 3;

int main()
{
    int area;                             // definition of area of circle
    int perimeter;                        // definition of circumference
    area = (LENGTH*WIDTH);                // computes area
    perimeter = (LENGTH * 2)+(WIDTH * 2);    // computes perimeter

    cout << "The area of the rectangle is " << area << endl;
    cout << "The perimeter of the rectangle is " << perimeter << endl;

    return 0;
}


