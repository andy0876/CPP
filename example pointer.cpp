#include <iostream>

using namespace std;

int main() {
int m = 10; // Assumed to be at address 20300
int n = 20; // Assumed to be at address 20304
int* p = &m;

cout << &m << endl; // Prints 20300
cout << &n << endl; // Does not print 20304
cout << p << endl; // Prints 20300

  return 0;
}