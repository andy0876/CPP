#include <iostream>

using namespace std;
int main() {
  double account = 0;
  double* ptr = &account;
  *ptr = 1000;
  cout << *ptr; // line 5: see below for error message
  
  return 0;
}