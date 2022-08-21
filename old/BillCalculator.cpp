#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int dollar_1, dollar_2, dollar_5, dollar_10, 
    dollar_20, dollar_50, dollar_100;

    int total_1, total_2, total_5, total_10, 
    total_20, total_50, total_100;

    double allTotal;

    cout << "Enter amount of $1 Dollar: ";
    cin >> dollar_1;

    cout << "Enter amount of $2 Dollar: ";
    cin >> dollar_2;

    cout << "Enter amount of $5 Dollar: ";
    cin >> dollar_5;

    cout << "Enter amount of $10 Dollar: ";
    cin >> dollar_10;

    cout << "Enter amount of $20 Dollar: ";
    cin >> dollar_20;

    cout << "Enter amount of $50 Dollar: ";
    cin >> dollar_50;

    cout << "Enter amount of $100 Dollar: ";
    cin >> dollar_100;

    total_1 = dollar_1 * 1;
    total_2 = dollar_2 * 2;
    total_5 = dollar_5 * 5;
    total_10 = dollar_10 * 10;
    total_20 = dollar_20 * 20;
    total_50 = dollar_50 * 50;
    total_100 = dollar_100 * 100;
    allTotal = total_1 + total_2 + total_5 + total_10 +
    total_20 + total_50 + total_100;

    cout << setprecision(2) << fixed;
    cout << "Total is: $" << allTotal << endl;
    
}
