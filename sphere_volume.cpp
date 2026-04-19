#include <iostream>
#include <cmath>         //required for pow function
using namespace std;

int main() {
    
    double radius;
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    double volume = (4.0 / 3.0) * 3.14159 * pow(radius, 3);        // Volume of a sphere = (4/3) * π * r^3. Use of double because of the division and the value of π.
    cout << "The volume of the sphere with radius " << radius << " is " << volume << "." << endl;

    return 0;
    
}