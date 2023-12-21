#include <iostream>

using namespace std;

int main() {
    int age1;
    int age2;
    
    cout << "Enter your age 1: ";
    cin >> age1;
    
    cout << "Enter your age 2: ";
    cin >> age2;
    
    if (age1 >= 100 && age2 >= 100) {
        cout << "Both ages are older" << '\n';
    } else if (age2 < age1) {
        cout << "Age 1 is older than Age 2" << '\n';
    } else if (age1 < age2) {
        cout << "Age 2 is older than Age 1" << '\n';
    } else {
        cout << "Both ages are younger";
    }
}