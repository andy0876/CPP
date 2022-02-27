//WARNING: the outputs may not be incorrect
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double taxrate;
    double allTotal, afterTotal, beforetax;

    cout << "Enter tax percentage: ";
    cin >> taxrate;

    cout << "Enter total: $";
    cin >> allTotal;

    beforetax = (allTotal * taxrate)/100;

    afterTotal = beforetax + allTotal;

    //display outputs
    cout << endl;
    cout << setprecision(2) << fixed;
    cout << "Before total: $" << allTotal << endl;
    cout << "Tax: $" << beforetax << endl;
    cout << "Your total: $" << afterTotal << endl;

    cout << "Designed by Andy Huynh" << endl;

    return 0;
}
