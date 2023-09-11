#include <iostream>
using namespace std;

int main(){
    int a = 100;
    int b = 42;
    int c = 93;
    int *d = &a;
    int *e = &b;
    int *f = &c;
    
    cout << " " << a << " " << b << " " << c << endl;
    cout << " " << &a << " " << &b << " " << &c << endl;
    cout << " " << d << " " << e << " " << f << endl;
    cout << " " << *d << " " << *e << " " << *f << endl;
    cout << " " << &d << " " << &e << " " << &f << endl;
}