#include <iostream>
using namespace std;

int main(){

    int a, b;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter another integer: ";
    cin >> b;

    int* ptr_a = &a;        // Pointer for a
    int* ptr_b = &b;        // Pointer for b

    cout << "\nYou entered " << *ptr_a << " and " << *ptr_b;    // Dereferences pointers to print out original variables

}