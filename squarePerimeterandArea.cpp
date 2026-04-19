#include <iostream>
#include <cmath>        
using namespace std;

int main() {
    
    double sideLength;
    cout << "Enter the length of one side of the square: ";
    cin >> sideLength;

    double perimeter = 4 * sideLength;
    double area = pow(sideLength, 2);        //decided to use pow function for consistency with the sphere_volume.cpp file, but could also be calculated as sideLength * sideLength.

    cout << "The perimeter of the square is " << perimeter << "." << endl;
    cout << "The area of the square is " << area << "." << endl;

    return 0;
    
}