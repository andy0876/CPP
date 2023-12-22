#include <iostream>

using namespace std;

int main() {
    int number;
    
    cout << "Enter your number: ";
    cin >> number;
    
    if (number == 10 || number == 12) {
        cout << "The number is valid" << '\n';
    } else {
        cout << "The number is not valid" << '\n';
    }
}