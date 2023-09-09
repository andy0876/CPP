#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    
    int* p;
    if(a<b)
    {
        p = &a;
        *p = a;
    }
    else
    {
        p = &b;
        *p = b;
    }
    *p = 0;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    
    return 0;
}

/*1: Compare output
Input
1
2
Your output
a:0
b:2
2: Compare output
Input
9
8
Your output
a:9
b:0
*/