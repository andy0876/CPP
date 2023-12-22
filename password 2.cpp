#include <iostream>
#include <string>

using namespace std;

int main() {
    string username;
    string password;
    
    cout << "Enter your username: ";
    getline(cin, username);
    //cin >> username;
    
    cout << "Enter your password: ";
    getline(cin, password);
    
    if ((username == "Andy" && password == "Engineer") ||
    (username == "Sarah" && password == "Nurse")) {
        cout << "Access Granted";
    } else {
        cout << "Access Denied";
    }
}