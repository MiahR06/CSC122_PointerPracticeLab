#include <iostream>
using namespace std;

int main(){

    char str[] = "This is a C-style string";
    char* ptr = str;

    while (*ptr != '\0'){       // Loops until pointer reaches the null character
        ptr++;                  // Moves pointer to the next char
    }

    while (*ptr != str[0]){     // Loops while the pointer isn't pointing to str[0]
        cout << *ptr;           // Prints the character the pointer is pointing to
        ptr--;                  // Moves backwards through string
        if (*ptr == str[0]){
            cout << *ptr;       // Displays final letter once the pointer reaches [0]
        }
    }

}



/*
Write a program that prints a C-style string in reverse using a pointer.

Create a C-style string which is an array of chars. Then, create a pointer that points to the start of the array. Move the pointer through the string until you reach the null character \0, like in the previous exercise. However, now that you are at the end of the string, reverse direction and go backwards back to the beginning, printing each character to the console.
*/
