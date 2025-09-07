#include <iostream>
using namespace std;

int main(){

    char str[] = "This is a C-style string";

    char* ptr = str;          // Char pointer because it has to point to a character
    int count = 0;

    while (*ptr != '\0'){        // Loops until pointer reaches the null character
        ptr++;                  // Moves pointer to the next char
        count++;                // Increases each time the pointer moves
    }

    cout << "The pointer visited " << count << " cells";

}