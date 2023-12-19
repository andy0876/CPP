#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string username;
    string password;
    string fullname;
    
    cout << "Enter your username: " << "\n";
    getline( cin, username, '\n' );
    cout << "Enter your password: " << "\n";
    getline( cin, password, '\n' );
    cout << "Enter your secret name: " << endl;
    getline(cin,fullname,'\n' );
    
    if ( (username == "root" && password == "xyzzy") && fullname == "andy" )
    {
        cout << "Access allowed" << "\n";
    } else if (username == "root" && password == "xyzzy") {
        cout << "Access allowed 2 but missing 'andy' in input" << endl;
    } else {
        cout << "Access denied" << endl;
    }
    return 0;
}