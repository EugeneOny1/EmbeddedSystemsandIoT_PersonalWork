#include <iostream>
using namespace std;

int main() {
    double x = 0;    //initialize x with a value of 0
    int y = 20;   //initialize y with a value of 20
        
    while (y >= 6) {     //while y is greater than or equal to 6, execute the loop
        y -= 4;   //decrement y by 4
        x += (2.0/y);     //increment x by the value of 2 divided by y
            
    }

    cout << "The value of x is: " << x << endl;     //output the final value of x after the loop has completed
}