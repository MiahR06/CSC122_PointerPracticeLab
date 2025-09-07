#include <iostream>
using namespace std;

int linearSearch(int arr[5], int size, int target);     // Linear search function

int main(){

    int arr[5] = {24, 9, 13, 53, 21};       // Unsorted array

    cout << "Values: ";

    for (int i=0; i<5; i++){                // For loop to display values in array
        cout << arr[i] << "   ";
    }

    linearSearch(arr, 5, 53);               // LinearSearch to find the max number
    int* max_ptr = arr;                     // Pointer set equal to array

    cout << "\n\nmaximum value: " << *max_ptr;  // Dereferenced

}

int linearSearch(int arr[5], int size, int target){

    for (int i=0; i<size; i++){
        if (arr[i] == target){
            arr[0] = target;
            return i;
        }
    }
    return -1;
}