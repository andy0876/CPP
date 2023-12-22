#include <iostream>

using namespace std;

int main() {
    int number;
    int number2;
    char operation;
    int calculate;
    
    cout << "Select one of the four arithmetic operations: ";
    cin >> operation;
    
    cout << "Enter your first number: ";
    cin >> number;
    
    cout << "Enter your second number: ";
    cin >> number2;
    
    if (operation == '+') {
        calculate = number + number2;
    } else if (operation == '-') {
        calculate = number - number2;
    } else if (operation == '/') {
        calculate = number / number2;
    } else {
        calculate = number * number2;
    }
    
    cout << number << " " << operation << " " << number2 << " = " << calculate;
    
}