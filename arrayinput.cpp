#include <iostream>
using namespace std;

int main() {

    int arr[5];     //declare an array of integers with a size of 5

    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) {     //use a for loop to iterate through the array and take input from the user
        cin >> arr[i];     //store the input in the corresponding index of the array
    }

    cout << "The integers you entered are:" << endl;

    int average = 0;     //initialize a variable to store the average of the integers
    for (int i = 0; i < 5; i++) {     //use another for loop to iterate through the array and output the integers
        cout << arr[i] << " ";     //output the integer at the current index followed by a space
        average += arr[i];     //add the integer at the current index to the average variable
    }
    average /= 5;     //divide the total sum of the integers by 5 to get the average
    cout << endl;     //output a newline for better formatting
    cout << "The average of the integers is: " << average << endl;     //output the average of the integers
}