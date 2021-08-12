// This program will output the circumference and area
// of the circle with a given radius.

// Alberto Conde
// September 4, 2020

#include <iostream>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main()
{
    float area;                             // definition of area of circle
    float circumference;                // definition of circumference
    circumference = 2 * PI * RADIUS;    // computes circumference
    area = PI * (RADIUS * RADIUS);                         // computes area

    cout << "The circumference of the circle is " << circumference << endl;
    cout << "The area of the circle is " << area << endl;

    return 0;
}
