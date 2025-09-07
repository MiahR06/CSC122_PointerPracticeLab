#include <iostream>
#include <vector>
using namespace std;

int findMidPoint(vector<int> num);

int main(){

    vector<int> num = {15, 64, 9, 32, 10};

    for (int i=0; i<5; i++){
        cout << num[i] << "   ";
    }

    int midpoint = findMidPoint(num);
    
    cout << "\n\nthe midpoint is " << midpoint;

}

int findMidPoint(vector<int> num){

    int* ptrStart = &num[0];                    // Points to start of num vector
    int* ptrEnd = &num[num.size() - 1];         // Points to end of num vector

    while (ptrStart < ptrEnd){
        ptrStart++;                 // Pointer moves forward once
        ptrEnd--;                   // Pointer moves backwards once
    }

    if (ptrStart == ptrEnd){        // Checks if start and end pointers have reached the middle
        return *ptrStart;           // Returns the middle index
    } else {
        return *ptrStart - 1;       // Returns the smaller index
    }

}


/*
Write a program to determine the midpoint value of a vector.

Create a vector of integers (vector<int>) that contains some number of random, unsorted values. You might make the values up yourself or use rand(). Then, create two pointers - one that points to the beginning of the vector and the other that points to the end. Move the pointers towards each other, step by step, until they meet at the midpoint. Then, return the value of the index where they meet.

If they pass each other without meeting (i.e. there are an even number of elements in the vector), return the value of the smaller index, right before where the midpoint would be.
*/