#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string name;
    string username;
    string password;
    
    cout << "Enter your name: " << "\n";
    getline(cin, name, '\n');
    cout << "Enter your username: " << "\n";
    getline( cin, username, '\n' );
    cout << "Enter your password: " << "\n";
    getline( cin, password, '\n' );
    
    if ( name == "andy" && username != "root" && password != "xyzzy" )
    {
        cout << "Access allowed" << "\n";
    } else if (name == "andy" || !(username == "root" && password == "xyzzy")) {
        cout << "Bad username or password. Denied access!" << "\n";
    } else {
        cout << "Access allowed but missing 'Andy' in input";

    }
    // continue onward!
    return 0;
}