//programmed 2022
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double taxrate;
    double allTotal, afterTotal, beforetax;

    cout << "Enter Subtotal: $";
    cin >> allTotal;

    cout << "Enter Tax: ";
    cin >> taxrate;

    beforetax = (allTotal * taxrate)/100;

    afterTotal = beforetax + allTotal;

    //display outputs
    cout << endl;
    cout << setprecision(2) << fixed;
    cout << "Before total: $" << allTotal << endl;
    cout << "Tax: $" << beforetax << endl;
    cout << "Total Price with (" << taxrate << "%)" <<  " Tax: $" << afterTotal << endl;

    cout << "Designed by Andy Huynh" << endl;

    return 0;
}
