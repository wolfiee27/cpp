# include <iostream>
# include "headerFile.h"
using namespace std;


// experiment to understand function overiding -> function is in the header file
int main() {
    int v1 = 5;
    int v2 = 10;
    float v3 = 10.8;
    float v4 = 9.5;

    printf("\n addition of integers values is: %d", add(v1, v2)); // 15
    printf("\n addition of float values is: %f", add(v3, v4)); // 20.2999
    return 0;
}