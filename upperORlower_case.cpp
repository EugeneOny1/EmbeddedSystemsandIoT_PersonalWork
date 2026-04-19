#include <iostream>
using namespace std;

int main() {
    
    string input;
    cout << "Enter a character: ";
    cin >> input;

    if (input.length() == 1) {
        char character = input[0];      // Get the first character from the input string
        if (character >= 'A' && character <= 'Z') {      // Check if the character is an uppercase letter
            cout << "The character '" << character << "' is an uppercase letter." << endl;
        } else if (character >= 'a' && character <= 'z') {       // Check if the character is a lowercase letter
            cout << "The character '" << character << "' is a lowercase letter." << endl;
        } else {
            cout << "The character '" << character << "' is not an alphabetic letter." << endl;
        }
    } else {
        cout << "Please enter a single character." << endl;
    }

    return 0;

}