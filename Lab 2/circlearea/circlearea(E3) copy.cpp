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
    int circumference;                // definition of circumference
    circumference = 2 * PI * RADIUS;    // computes circumference
    area = PI * (RADIUS * RADIUS);                         // computes area

    cout << "The circumference of the circle is " << circumference << endl;
    cout << "The area of the circle is " << area << endl;

    return 0;
}

// By changing float to int in the circumference, now our circumference output won't have decimal places. Instead of 33.912, we will have 33. Since we did not change the definition of area (still float), the out will have decimal places (91.5624)
