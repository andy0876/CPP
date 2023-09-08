#include <iostream>

using namespace std;
int foo(int& fen, int* luca, int ava);

int main(){
    int mia = 73;
    int zoe = 2696;
    int amy = 1000;
    int *tod = &mia;
    int *jim = &zoe;
    int *leo = &amy;
    
    cout << mia << " " << zoe << amy << endl;
    cout << *tod << " " << *jim << " "  << *leo << endl;
    
    zoe = foo(amy, tod, *leo);
    
    cout << mia << " " << zoe << " " << amy << endl;
    cout << *tod << " " << *jim << " " << *leo << endl;
}

int foo(int& fen, int* luca, int ava){
    *luca +=7;
    fen += 12;
    ava += 3;
    cout << ava << " " << luca << " " << fen << endl;
    return ava;
}