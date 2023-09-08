#include <iostream>

using namespace std;

int main(){
    int boxes[6] = {5,4,3,2,1,0};
    int jobs[4] = {42,88,99,51};
    int* jam = nullptr;
    int* cab = jobs;
    jam = cab;
    
    cout << boxes[3] << " " << *boxes << " " << jam[2] << " " << *cab << endl;
    
    jam = &boxes[1];
    cab++;
    
    cout << *(jam + 2) << " " << jam[3] << " " << *boxes << " "  << boxes[1] << endl;
    
    return 0;
}
