#include <iostream>
using namespace std;

int main(){
    int fish = 34;
    int cow = 72;
    int goat = 900;
    int *frog = &fish;
    int *fox = &cow;
    int *toad = &goat;
    
    *frog = cow + *fox;
    *toad = (*toad)++;
    toad = fox;
    *fox = fish + goat;
    
    cout << fish << " " << cow << " " << goat << endl;
    cout << &fish << " " << &cow << " " << &goat << endl;
    cout << frog << " " << fox << " " << toad << endl;
    cout << *frog << " " << *fox << " " << *toad << endl;
    cout << &frog << " " << &fox << " " << &toad << endl;
}