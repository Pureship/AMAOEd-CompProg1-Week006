#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include <string>
using namespace std;

int main() {

    int input;
    cout << "Enter an integer: ";
    cin >> input;
    if (input == 0) {
        cout << "Hello World" << endl;
    } else if (input == 1) {
        cout << "I am Groot" << endl;
    } else if (input == 2) {
        cout << "To the Top" << endl;
    } else if (input == 3) {
        cout << "Where is the horizon" << endl;
    } else if (input == 4) {
        cout << "I do not know" << endl;
    } else {
        cout << "Yeah, I will." << endl;
    }
    
    cout << "Enter an integer: ";
    cin >> input;
    switch (input) {
        case 0:
            cout << "Hello World" << endl;
            break;
        case 1:
            cout << "I am good" << endl;
            break;
        case 2:
            cout << "To the Top" << endl;
            break;
        case 3:
            cout << "Where is the horizon" << endl;
            break;
        case 4:
            cout << "I do not know" << endl;
            break;
        default:
            cout << "Yeah, I will." << endl;
            break;
    }
    
    float num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    if (num2 == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
    } else {
        cout << "The result of division is: " << num1 / num2 << endl;
    }

    cin.ignore();
    
    _pause();
    return 0;
}