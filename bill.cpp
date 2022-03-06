#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //declare variables
    int bill, bill2, bill5, bill10, bill20, bill50, bill100;
    double total;

    cout << "Enter $1: ";
    cin >> bill;

    cout << "Enter $2: ";
    cin >> bill2;

    cout << "Enter $5: ";
    cin >> bill5;

    cout << "Enter $10: ";
    cin >> bill10;

    cout << "Enter $20: ";
    cin >> bill20;

    cout << "Enter $50: ";
    cin >> bill50;

    cout << "Enter $100: ";
    cin >> bill100;

    //calculate count
    total = bill + bill2 * 2 + bill5 * 5 + bill10 * 10 + bill20 * 20 + bill50 * 50 + bill100 * 100;

    //display outputs
    cout << setprecision(2) << fixed << endl;
    cout << "Total: $" << total << endl;
    cout << "Designed by Andy" << endl;
}
