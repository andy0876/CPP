#include <iostream>
using namespace std;

int main() {
  double account = 0;
  double* ptr = &account;
  *ptr = 1000;
  cout << *ptr;
  
  return 0;
}
