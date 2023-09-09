#include <iostream>

using namespace std;

int main(){
    double joint_account;
    double harrys_account;
    double* account_pointer = &harrys_account;
    account_pointer = &joint_account;
    
    cout << harrys_account << endl;
    cout << joint_account;
}