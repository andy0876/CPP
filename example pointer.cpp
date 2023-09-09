int m = 10;
int* p = &m;

cout << p << endl; // Prints 20300
cout << *p << endl; // Prints 10

int n = 20;
cout << &n << endl; // Prints 20304

p = &n;

cout << p << endl; // Prints 20304
cout << *p << endl; // Prints 20

m = *p;

cout << m << endl; // Prints 20

// The following statements will cause errors:

// m = p; // Error: incompatible types

// &10; // Error: can't take address of literal

// &p; // Error: can't take address of pointer variable

// double x = 0;
// p = &x; // Error: incompatible types
